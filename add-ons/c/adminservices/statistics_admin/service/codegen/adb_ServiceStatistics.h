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


        #ifndef ADB_SERVICESTATISTICS_H
        #define ADB_SERVICESTATISTICS_H

       /**
        * adb_ServiceStatistics.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: #axisVersion# #today#
        */

       /**
        *  adb_ServiceStatistics class
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
        

        typedef struct adb_ServiceStatistics adb_ServiceStatistics_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_ServiceStatistics_t
         * @param env pointer to environment struct
         * @return newly created adb_ServiceStatistics_t object
         */
        adb_ServiceStatistics_t* AXIS2_CALL
        adb_ServiceStatistics_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _ServiceStatistics adb_ServiceStatistics_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ServiceStatistics_free (
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

        /**
         * Free adb_ServiceStatistics_t object
         * @param  _ServiceStatistics adb_ServiceStatistics_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ServiceStatistics_free_obj (
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for avgResponseTime. 
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return double
         */
        double AXIS2_CALL
        adb_ServiceStatistics_get_avgResponseTime(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

        /**
         * Setter for avgResponseTime.
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @param arg_avgResponseTime double
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ServiceStatistics_set_avgResponseTime(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env,
            const double  arg_avgResponseTime);

        /**
         * Resetter for avgResponseTime
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ServiceStatistics_reset_avgResponseTime(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

        
        

        /**
         * Getter for faultCount. 
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_ServiceStatistics_get_faultCount(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

        /**
         * Setter for faultCount.
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @param arg_faultCount int
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ServiceStatistics_set_faultCount(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env,
            const int  arg_faultCount);

        /**
         * Resetter for faultCount
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ServiceStatistics_reset_faultCount(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

        
        

        /**
         * Getter for maxResponseTime. 
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return int64_t
         */
        int64_t AXIS2_CALL
        adb_ServiceStatistics_get_maxResponseTime(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

        /**
         * Setter for maxResponseTime.
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @param arg_maxResponseTime int64_t
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ServiceStatistics_set_maxResponseTime(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env,
            const int64_t  arg_maxResponseTime);

        /**
         * Resetter for maxResponseTime
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ServiceStatistics_reset_maxResponseTime(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

        
        

        /**
         * Getter for minResponseTime. 
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return int64_t
         */
        int64_t AXIS2_CALL
        adb_ServiceStatistics_get_minResponseTime(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

        /**
         * Setter for minResponseTime.
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @param arg_minResponseTime int64_t
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ServiceStatistics_set_minResponseTime(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env,
            const int64_t  arg_minResponseTime);

        /**
         * Resetter for minResponseTime
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ServiceStatistics_reset_minResponseTime(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

        
        

        /**
         * Getter for requestCount. 
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_ServiceStatistics_get_requestCount(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

        /**
         * Setter for requestCount.
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @param arg_requestCount int
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ServiceStatistics_set_requestCount(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env,
            const int  arg_requestCount);

        /**
         * Resetter for requestCount
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ServiceStatistics_reset_requestCount(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

        
        

        /**
         * Getter for responseCount. 
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_ServiceStatistics_get_responseCount(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

        /**
         * Setter for responseCount.
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @param arg_responseCount int
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ServiceStatistics_set_responseCount(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env,
            const int  arg_responseCount);

        /**
         * Resetter for responseCount
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ServiceStatistics_reset_responseCount(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether avgResponseTime is nill
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ServiceStatistics_is_avgResponseTime_nil(
                adb_ServiceStatistics_t* _ServiceStatistics,
                const axutil_env_t *env);


        

        /**
         * Check whether faultCount is nill
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ServiceStatistics_is_faultCount_nil(
                adb_ServiceStatistics_t* _ServiceStatistics,
                const axutil_env_t *env);


        

        /**
         * Check whether maxResponseTime is nill
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ServiceStatistics_is_maxResponseTime_nil(
                adb_ServiceStatistics_t* _ServiceStatistics,
                const axutil_env_t *env);


        

        /**
         * Check whether minResponseTime is nill
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ServiceStatistics_is_minResponseTime_nil(
                adb_ServiceStatistics_t* _ServiceStatistics,
                const axutil_env_t *env);


        

        /**
         * Check whether requestCount is nill
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ServiceStatistics_is_requestCount_nil(
                adb_ServiceStatistics_t* _ServiceStatistics,
                const axutil_env_t *env);


        

        /**
         * Check whether responseCount is nill
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ServiceStatistics_is_responseCount_nil(
                adb_ServiceStatistics_t* _ServiceStatistics,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ServiceStatistics_deserialize(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ServiceStatistics_deserialize_obj(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_ServiceStatistics_declare_parent_namespaces(
                    adb_ServiceStatistics_t* _ServiceStatistics,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @param ServiceStatistics_om_node node to serialize from
         * @param ServiceStatistics_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_ServiceStatistics_serialize(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env,
            axiom_node_t* ServiceStatistics_om_node, axiom_element_t *ServiceStatistics_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @param ServiceStatistics_om_node node to serialize from
         * @param ServiceStatistics_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_ServiceStatistics_serialize_obj(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env,
            axiom_node_t* ServiceStatistics_om_node, axiom_element_t *ServiceStatistics_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_ServiceStatistics is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_ServiceStatistics_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_ServiceStatistics_t
         * @param env pointer to environment struct
         * @param _avgResponseTime double
         * @param _faultCount int
         * @param _maxResponseTime int64_t
         * @param _minResponseTime int64_t
         * @param _requestCount int
         * @param _responseCount int
         * @return newly created adb_ServiceStatistics_t object
         */
        adb_ServiceStatistics_t* AXIS2_CALL
        adb_ServiceStatistics_create_with_values(
            const axutil_env_t *env,
                double _avgResponseTime,
                int _faultCount,
                int64_t _maxResponseTime,
                int64_t _minResponseTime,
                int _requestCount,
                int _responseCount);

        


                /**
                 * Free adb_ServiceStatistics_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _ServiceStatistics adb_ServiceStatistics_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                double AXIS2_CALL
                adb_ServiceStatistics_free_popping_value(
                        adb_ServiceStatistics_t* _ServiceStatistics,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for avgResponseTime by property number (1)
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return double
         */
        double AXIS2_CALL
        adb_ServiceStatistics_get_property1(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

    
        

        /**
         * Getter for faultCount by property number (2)
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_ServiceStatistics_get_property2(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

    
        

        /**
         * Getter for maxResponseTime by property number (3)
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return int64_t
         */
        int64_t AXIS2_CALL
        adb_ServiceStatistics_get_property3(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

    
        

        /**
         * Getter for minResponseTime by property number (4)
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return int64_t
         */
        int64_t AXIS2_CALL
        adb_ServiceStatistics_get_property4(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

    
        

        /**
         * Getter for requestCount by property number (5)
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_ServiceStatistics_get_property5(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

    
        

        /**
         * Getter for responseCount by property number (6)
         * @param  _ServiceStatistics adb_ServiceStatistics_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_ServiceStatistics_get_property6(
            adb_ServiceStatistics_t* _ServiceStatistics,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_SERVICESTATISTICS_H */
    

