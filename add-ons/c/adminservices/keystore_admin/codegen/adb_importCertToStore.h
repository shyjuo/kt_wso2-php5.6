/*
* Copyright 2009-2010 WSO2, Inc. http://wso2.com
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


        #ifndef ADB_IMPORTCERTTOSTORE_H
        #define ADB_IMPORTCERTTOSTORE_H

       /**
        * adb_importCertToStore.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: #axisVersion# #today#
        */

       /**
        *  adb_importCertToStore class
        */

        

        #include <stdio.h>
        #include <axiom.h>
        #include <axis2_util.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>

        #include "axis2_extension_mapper.h"

        #ifdef __cplusplus
        extern "C"
        {
        #endif

        #define ADB_DEFAULT_DIGIT_LIMIT 1024
        #define ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT 64
        

        typedef struct adb_importCertToStore adb_importCertToStore_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_importCertToStore_t
         * @param env pointer to environment struct
         * @return newly created adb_importCertToStore_t object
         */
        adb_importCertToStore_t* AXIS2_CALL
        adb_importCertToStore_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _importCertToStore adb_importCertToStore_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_importCertToStore_free (
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env);

        /**
         * Free adb_importCertToStore_t object
         * @param  _importCertToStore adb_importCertToStore_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_importCertToStore_free_obj (
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for fileName. 
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_importCertToStore_get_fileName(
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env);

        /**
         * Setter for fileName.
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @param arg_fileName axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_importCertToStore_set_fileName(
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env,
            const axis2_char_t*  arg_fileName);

        /**
         * Resetter for fileName
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_importCertToStore_reset_fileName(
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env);

        
        

        /**
         * Getter for fileData. 
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_importCertToStore_get_fileData(
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env);

        /**
         * Setter for fileData.
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @param arg_fileData axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_importCertToStore_set_fileData(
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env,
            const axis2_char_t*  arg_fileData);

        /**
         * Resetter for fileData
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_importCertToStore_reset_fileData(
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env);

        
        

        /**
         * Getter for keyStoreName. 
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_importCertToStore_get_keyStoreName(
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env);

        /**
         * Setter for keyStoreName.
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @param arg_keyStoreName axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_importCertToStore_set_keyStoreName(
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env,
            const axis2_char_t*  arg_keyStoreName);

        /**
         * Resetter for keyStoreName
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_importCertToStore_reset_keyStoreName(
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether fileName is nill
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_importCertToStore_is_fileName_nil(
                adb_importCertToStore_t* _importCertToStore,
                const axutil_env_t *env);


        
        /**
         * Set fileName to nill (currently the same as reset)
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_importCertToStore_set_fileName_nil(
                adb_importCertToStore_t* _importCertToStore,
                const axutil_env_t *env);
        

        /**
         * Check whether fileData is nill
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_importCertToStore_is_fileData_nil(
                adb_importCertToStore_t* _importCertToStore,
                const axutil_env_t *env);


        
        /**
         * Set fileData to nill (currently the same as reset)
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_importCertToStore_set_fileData_nil(
                adb_importCertToStore_t* _importCertToStore,
                const axutil_env_t *env);
        

        /**
         * Check whether keyStoreName is nill
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_importCertToStore_is_keyStoreName_nil(
                adb_importCertToStore_t* _importCertToStore,
                const axutil_env_t *env);


        
        /**
         * Set keyStoreName to nill (currently the same as reset)
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_importCertToStore_set_keyStoreName_nil(
                adb_importCertToStore_t* _importCertToStore,
                const axutil_env_t *env);
        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_importCertToStore_deserialize(
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_importCertToStore_deserialize_obj(
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_importCertToStore_declare_parent_namespaces(
                    adb_importCertToStore_t* _importCertToStore,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @param importCertToStore_om_node node to serialize from
         * @param importCertToStore_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_importCertToStore_serialize(
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env,
            axiom_node_t* importCertToStore_om_node, axiom_element_t *importCertToStore_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @param importCertToStore_om_node node to serialize from
         * @param importCertToStore_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_importCertToStore_serialize_obj(
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env,
            axiom_node_t* importCertToStore_om_node, axiom_element_t *importCertToStore_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_importCertToStore is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_importCertToStore_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_importCertToStore_t
         * @param env pointer to environment struct
         * @param _fileName axis2_char_t*
         * @param _fileData axis2_char_t*
         * @param _keyStoreName axis2_char_t*
         * @return newly created adb_importCertToStore_t object
         */
        adb_importCertToStore_t* AXIS2_CALL
        adb_importCertToStore_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _fileName,
                axis2_char_t* _fileData,
                axis2_char_t* _keyStoreName);

        


                /**
                 * Free adb_importCertToStore_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _importCertToStore adb_importCertToStore_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axis2_char_t* AXIS2_CALL
                adb_importCertToStore_free_popping_value(
                        adb_importCertToStore_t* _importCertToStore,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for fileName by property number (1)
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_importCertToStore_get_property1(
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env);

    
        

        /**
         * Getter for fileData by property number (2)
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_importCertToStore_get_property2(
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env);

    
        

        /**
         * Getter for keyStoreName by property number (3)
         * @param  _importCertToStore adb_importCertToStore_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_importCertToStore_get_property3(
            adb_importCertToStore_t* _importCertToStore,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_IMPORTCERTTOSTORE_H */
    

