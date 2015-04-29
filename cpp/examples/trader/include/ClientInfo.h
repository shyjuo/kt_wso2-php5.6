

        #ifndef CLIENTINFO_H
        #define CLIENTINFO_H

       /**
        * ClientInfo.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: #axisVersion# #today#
        */

       /**
        *  ClientInfo class
        */

        namespace org_wso2_www_types{
            class ClientInfo;
        }
        

        

        #include <stdio.h>
        #include <OMElement.h>
        #include <ServiceClient.h>
        #include <ADBDefines.h>

namespace org_wso2_www_types
{
        
        

        class ClientInfo {

        private:
             std::string property_Name;

                
                bool isValidName;
            std::string property_Ssn;

                
                bool isValidSsn;
            

        /*** Private methods ***/
          

        bool WSF_CALL
        setNameNil();
            

        bool WSF_CALL
        setSsnNil();
            



        /******************************* public functions *********************************/

        public:

        /**
         * Constructor for class ClientInfo
         */

        ClientInfo();

        /**
         * Destructor ClientInfo
         */
        ~ClientInfo();


       

        /**
         * Constructor for creating ClientInfo
         * @param 
         * @param Name std::string
         * @param Ssn std::string
         * @return newly created ClientInfo object
         */
        ClientInfo(std::string arg_Name,std::string arg_Ssn);
        
        
        /********************************** Class get set methods **************************************/
        
        

        /**
         * Getter for name. 
         * @return std::string*
         */
        WSF_EXTERN std::string WSF_CALL
        getName();

        /**
         * Setter for name.
         * @param arg_Name std::string*
         * @return true on success, false otherwise
         */
        WSF_EXTERN bool WSF_CALL
        setName(const std::string  arg_Name);

        /**
         * Re setter for name
         * @return true on success, false
         */
        WSF_EXTERN bool WSF_CALL
        resetName();
        
        

        /**
         * Getter for ssn. 
         * @return std::string*
         */
        WSF_EXTERN std::string WSF_CALL
        getSsn();

        /**
         * Setter for ssn.
         * @param arg_Ssn std::string*
         * @return true on success, false otherwise
         */
        WSF_EXTERN bool WSF_CALL
        setSsn(const std::string  arg_Ssn);

        /**
         * Re setter for ssn
         * @return true on success, false
         */
        WSF_EXTERN bool WSF_CALL
        resetSsn();
        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether name is Nill
         * @return true if the element is Nil, false otherwise
         */
        bool WSF_CALL
        isNameNil();


        

        /**
         * Check whether ssn is Nill
         * @return true if the element is Nil, false otherwise
         */
        bool WSF_CALL
        isSsnNil();


        

        /**************************** Serialize and De serialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Deserialize the ADB object to an XML
         * @param dp_parent double pointer to the parent node to be deserialized
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return true on success, false otherwise
         */
        bool WSF_CALL
        deserialize(axiom_node_t** omNode, bool *isEarlyNodeValid, bool dontCareMinoccurs);
                         
            

       /**
         * Declare namespace in the most parent node 
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
        void WSF_CALL
        declareParentNamespaces(axiom_element_t *parent_element, axutil_hash_t *namespaces, int *next_ns_index);


        

        /**
         * Serialize the ADB object to an xml
         * @param ClientInfo_om_node node to serialize from
         * @param ClientInfo_om_element parent element to serialize from
         * @param tag_closed Whether the parent tag is closed or not
         * @param namespaces hash of namespace uris to prefixes
         * @param next_ns_index an int which contains the next namespace index
         * @return axiom_node_t on success,NULL otherwise.
         */
        axiom_node_t* WSF_CALL
        serialize(axiom_node_t* ClientInfo_om_node, axiom_element_t *ClientInfo_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the ClientInfo is a particle class (E.g. group, inner sequence)
         * @return true if this is a particle class, false otherwise.
         */
        bool WSF_CALL
        isParticle();



        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

      
        

        /**
         * Getter for name by property number (1)
         * @return std::string
         */

        std::string WSF_CALL
        getProperty1();

    
        

        /**
         * Getter for ssn by property number (2)
         * @return std::string
         */

        std::string WSF_CALL
        getProperty2();

    

};

}        
 #endif /* CLIENTINFO_H */
    

