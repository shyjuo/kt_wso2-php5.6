
require 'wsf'
require 'rexml/document'
require 'rexml/element'

def echoFunction(in_msg)
     "<wrapped>" + in_msg.payload_to_s + "</wrapped>"
end

def load_policy_from_file(filename)
   return nil unless filename.kind_of? String
   input = File.new(filename)
   unless input.nil?
     doc = REXML::Document.new(input)
     unless doc.nil?
       root_element = doc.root
       return root_element
     end
   end
   return nil
end
 

class SigningController < ApplicationController
 
   skip_before_filter :verify_authenticity_token

	def signing
		begin
            operations = {"echoString" => "echoFunction"}
            actions = {"http://php.axis2.org/samples/echoString" => "echoString"}

			cert = WSO2::Util::WSUtil::ws_get_cert_from_file("./app/controllers/keys/bob_cert.cert");
			pvt_key = WSO2::Util::WSUtil::ws_get_key_from_file("./app/controllers/keys/bob_key.pem");

			policy_content = {"sign" => true, 
							  "algorithm_suite" => "Basic256Rsa15",
							  "security_token_reference" => "KeyIdentifier"}
			
			policy = WSO2::WSF::WSPolicy.new({"security" => policy_content})

			sec_token = WSO2::WSF::WSSecurityToken.new({"private_key" => pvt_key,
														"certificate" => cert})

			wss = WSO2::WSF::WSService.new({"operations" => operations,
										  "actions" => actions,
										  "policy" => policy,
										  "security_token" => sec_token})

			res = wss.reply(request, response);
			
			render :xml => res
		end
	end

    def signing_file
        begin
            operations = {"echoString" => "echoFunction"}
            actions = {"http://php.axis2.org/samples/echoString" => "echoString"}

            cert = WSO2::Util::WSUtil::ws_get_cert_from_file("./app/controllers/keys/bob_cert.cert");
            pvt_key = WSO2::Util::WSUtil::ws_get_key_from_file("./app/controllers/keys/bob_key.pem");

            policy_content = load_policy_from_file("./app/controllers/policies/policy_signing.xml")

            policy = WSO2::WSF::WSPolicy.new(policy_content)

            sec_token = WSO2::WSF::WSSecurityToken.new({"private_key" => pvt_key,
                                                        "certificate" => cert})

            wss = WSO2::WSF::WSService.new({"operations" => operations,
                                          "actions" => actions,
                                          "policy" => policy,
                                          "security_token" => sec_token})

            res = wss.reply(request, response);

            render :xml => res
        end
    end
end
