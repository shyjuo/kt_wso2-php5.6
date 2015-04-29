/*
* Copyright 2005-2009 WSO2, Inc. http://wso2.com
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/


#include <stdio.h>
#include <ServiceClient.h>
#include <OMElement.h>
#include <iostream>
#include <WSFault.h>
#include <Environment.h>


using namespace std;
using namespace wso2wsf;

int main(int argc, char *argv[])
{
	Environment::initialize("echo_blocking_dual.log", AXIS2_LOG_LEVEL_TRACE);

    string end_point = "http://localhost:9090/axis2/services/echo";
    string reply_to = "http://localhost:6060/axis2/services/__ANONYMOUS_SERVICE__/__OPERATION_OUT_IN__";

    if (argc > 1)
    {
        if (string (argv[1]).compare("-h") == 0)
        {
            cout << "Usage : " << argv[0] << " [end_point] [reply_to]" << endl;
            cout << "use -h for help" << endl;
            cout << "default end_point " << end_point << endl;
            cout << "default reply_to " << reply_to << endl;
            cout << "NOTE: command line arguments must appear in given order, with trailing ones being optional" << endl;
            return 0;
        }
        else
            end_point = argv[1];
    }
    if (argc > 2)
        reply_to = argv[2];

    ServiceClient sc(end_point);
    sc.engageModule(AXIS2_MODULE_ADDRESSING);
    Options * op = sc.getOptions();
	op->setTimeout(1);
    op->setUseSeparateListener(true);
    op->setReplyTo(reply_to);

    OMNamespace * ns = new OMNamespace("http://ws.apache.org/axis2/services/echo", "ns1");
    OMElement * payload = new OMElement(NULL,"echoString", ns);
    OMElement * child = new OMElement(payload,"text", NULL);
    child->setText("Hello World!");
    cout << endl << "Request: " << payload << endl;

    try
    {
        OMElement * response = sc.request(payload, "http://ws.apache.org/axis2/c/samples/echoString");
        if (response)
        {   
            cout << endl << "Response: " << response << endl;
        }
    }
    catch (WSFault & e)
    {
        if (sc.getLastSOAPFault())
        {
            cout << endl << "Fault: " << sc.getLastSOAPFault() << endl;
        }
        else
        {
            cout << endl << "Error: " << e << endl;
        }
    }
	sc.getLastResponseSoapEnvelopeString();
    delete payload;
}
