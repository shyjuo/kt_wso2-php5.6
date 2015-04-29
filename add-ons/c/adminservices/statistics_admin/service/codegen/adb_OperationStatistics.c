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


        /**
         * adb_OperationStatistics.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_OperationStatistics.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = OperationStatistics
                 * Namespace URI = http://util.services.statistics.carbon.wso2.org/xsd
                 * Namespace Prefix = ns1
                 */
           


        struct adb_OperationStatistics
        {
            axis2_char_t *property_Type;

            double property_avgResponseTime;

                
                axis2_bool_t is_valid_avgResponseTime;
            int property_faultCount;

                
                axis2_bool_t is_valid_faultCount;
            int64_t property_maxResponseTime;

                
                axis2_bool_t is_valid_maxResponseTime;
            int64_t property_minResponseTime;

                
                axis2_bool_t is_valid_minResponseTime;
            int property_requestCount;

                
                axis2_bool_t is_valid_requestCount;
            int property_responseCount;

                
                axis2_bool_t is_valid_responseCount;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_OperationStatistics_set_avgResponseTime_nil(
                        adb_OperationStatistics_t* _OperationStatistics,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_OperationStatistics_set_faultCount_nil(
                        adb_OperationStatistics_t* _OperationStatistics,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_OperationStatistics_set_maxResponseTime_nil(
                        adb_OperationStatistics_t* _OperationStatistics,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_OperationStatistics_set_minResponseTime_nil(
                        adb_OperationStatistics_t* _OperationStatistics,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_OperationStatistics_set_requestCount_nil(
                        adb_OperationStatistics_t* _OperationStatistics,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_OperationStatistics_set_responseCount_nil(
                        adb_OperationStatistics_t* _OperationStatistics,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_OperationStatistics_t* AXIS2_CALL
        adb_OperationStatistics_create(
            const axutil_env_t *env)
        {
            adb_OperationStatistics_t *_OperationStatistics = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _OperationStatistics = (adb_OperationStatistics_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_OperationStatistics_t));

            if(NULL == _OperationStatistics)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_OperationStatistics, 0, sizeof(adb_OperationStatistics_t));

            _OperationStatistics->property_Type = axutil_strdup(env, "adb_OperationStatistics");
            _OperationStatistics->is_valid_avgResponseTime  = AXIS2_FALSE;
            _OperationStatistics->is_valid_faultCount  = AXIS2_FALSE;
            _OperationStatistics->is_valid_maxResponseTime  = AXIS2_FALSE;
            _OperationStatistics->is_valid_minResponseTime  = AXIS2_FALSE;
            _OperationStatistics->is_valid_requestCount  = AXIS2_FALSE;
            _OperationStatistics->is_valid_responseCount  = AXIS2_FALSE;
            

            return _OperationStatistics;
        }

        adb_OperationStatistics_t* AXIS2_CALL
        adb_OperationStatistics_create_with_values(
            const axutil_env_t *env,
                double _avgResponseTime,
                int _faultCount,
                int64_t _maxResponseTime,
                int64_t _minResponseTime,
                int _requestCount,
                int _responseCount)
        {
            adb_OperationStatistics_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_OperationStatistics_create(env);

            
              status = adb_OperationStatistics_set_avgResponseTime(
                                     adb_obj,
                                     env,
                                     _avgResponseTime);
              if(status == AXIS2_FAILURE) {
                  adb_OperationStatistics_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_OperationStatistics_set_faultCount(
                                     adb_obj,
                                     env,
                                     _faultCount);
              if(status == AXIS2_FAILURE) {
                  adb_OperationStatistics_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_OperationStatistics_set_maxResponseTime(
                                     adb_obj,
                                     env,
                                     _maxResponseTime);
              if(status == AXIS2_FAILURE) {
                  adb_OperationStatistics_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_OperationStatistics_set_minResponseTime(
                                     adb_obj,
                                     env,
                                     _minResponseTime);
              if(status == AXIS2_FAILURE) {
                  adb_OperationStatistics_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_OperationStatistics_set_requestCount(
                                     adb_obj,
                                     env,
                                     _requestCount);
              if(status == AXIS2_FAILURE) {
                  adb_OperationStatistics_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_OperationStatistics_set_responseCount(
                                     adb_obj,
                                     env,
                                     _responseCount);
              if(status == AXIS2_FAILURE) {
                  adb_OperationStatistics_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        double AXIS2_CALL
                adb_OperationStatistics_free_popping_value(
                        adb_OperationStatistics_t* _OperationStatistics,
                        const axutil_env_t *env)
                {
                    double value;

                    
                    
                    value = _OperationStatistics->property_avgResponseTime;

                    adb_OperationStatistics_free(_OperationStatistics, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_OperationStatistics_free(
                adb_OperationStatistics_t* _OperationStatistics,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_type_t*) _OperationStatistics,
                env,
                "adb_OperationStatistics");
            
        }

        axis2_status_t AXIS2_CALL
        adb_OperationStatistics_free_obj(
                adb_OperationStatistics_t* _OperationStatistics,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_FAILURE);

            if (_OperationStatistics->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _OperationStatistics->property_Type);
            }

            adb_OperationStatistics_reset_avgResponseTime(_OperationStatistics, env);
            adb_OperationStatistics_reset_faultCount(_OperationStatistics, env);
            adb_OperationStatistics_reset_maxResponseTime(_OperationStatistics, env);
            adb_OperationStatistics_reset_minResponseTime(_OperationStatistics, env);
            adb_OperationStatistics_reset_requestCount(_OperationStatistics, env);
            adb_OperationStatistics_reset_responseCount(_OperationStatistics, env);
            

            if(_OperationStatistics)
            {
                AXIS2_FREE(env->allocator, _OperationStatistics);
                _OperationStatistics = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_OperationStatistics_deserialize(
                adb_OperationStatistics_t* _OperationStatistics,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_type_t*) _OperationStatistics,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_OperationStatistics");
            
        }

        axis2_status_t AXIS2_CALL
        adb_OperationStatistics_deserialize_obj(
                adb_OperationStatistics_t* _OperationStatistics,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for OperationStatistics : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building avgResponseTime element
                      */
                     
                     
                     
                                   current_node = first_node;
                                   is_early_node_valid = AXIS2_FALSE;
                                   
                                   
                                    while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                    {
                                        current_node = axiom_node_get_next_sibling(current_node, env);
                                    }
                                    if(current_node != NULL)
                                    {
                                        current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                        qname = axiom_element_get_qname(current_element, env, current_node);
                                    }
                                   
                                 element_qname = axutil_qname_create(env, "avgResponseTime", "http://util.services.statistics.carbon.wso2.org/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_OperationStatistics_set_avgResponseTime(_OperationStatistics, env,
                                                                   atof(text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element avgResponseTime");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for avgResponseTime ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building faultCount element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "faultCount", "http://util.services.statistics.carbon.wso2.org/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_OperationStatistics_set_faultCount(_OperationStatistics, env,
                                                                   atoi(text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element faultCount");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for faultCount ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building maxResponseTime element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "maxResponseTime", "http://util.services.statistics.carbon.wso2.org/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_OperationStatistics_set_maxResponseTime(_OperationStatistics, env,
                                                                   axutil_strtol(text_value, (char**)NULL, 0));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element maxResponseTime");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for maxResponseTime ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building minResponseTime element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "minResponseTime", "http://util.services.statistics.carbon.wso2.org/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_OperationStatistics_set_minResponseTime(_OperationStatistics, env,
                                                                   axutil_strtol(text_value, (char**)NULL, 0));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element minResponseTime");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for minResponseTime ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building requestCount element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "requestCount", "http://util.services.statistics.carbon.wso2.org/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_OperationStatistics_set_requestCount(_OperationStatistics, env,
                                                                   atoi(text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element requestCount");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for requestCount ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building responseCount element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "responseCount", "http://util.services.statistics.carbon.wso2.org/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_OperationStatistics_set_responseCount(_OperationStatistics, env,
                                                                   atoi(text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element responseCount");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for responseCount ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_OperationStatistics_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_OperationStatistics_declare_parent_namespaces(
                    adb_OperationStatistics_t* _OperationStatistics,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_OperationStatistics_serialize(
                adb_OperationStatistics_t* _OperationStatistics,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_OperationStatistics == NULL)
            {
                return adb_OperationStatistics_serialize_obj(
                    _OperationStatistics, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_type_t*) _OperationStatistics, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_OperationStatistics");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_OperationStatistics_serialize_obj(
                adb_OperationStatistics_t* _OperationStatistics,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
             axis2_char_t *string_to_stream;
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         
         axis2_char_t* xsi_prefix = NULL;
         
         axis2_char_t* type_attrib = NULL;
         axiom_namespace_t* xsi_ns = NULL;
         axiom_attribute_t* xsi_type_attri = NULL;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_3[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_4[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_5[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_6[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _OperationStatistics, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
              
 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                  }
              }
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"OperationStatistics\"", NULL);
              axutil_stream_write(stream, env, type_attrib, axutil_strlen(type_attrib));

              AXIS2_FREE(env->allocator, type_attrib);
                
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
            else {
              /* if the parent tag closed we would be able to declare the type directly on the parent element */ 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                  }
              }
            }
            xsi_ns = axiom_namespace_create (env,
                                 "http://util.services.statistics.carbon.wso2.org/xsd",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "OperationStatistics", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://util.services.statistics.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://util.services.statistics.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://util.services.statistics.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_OperationStatistics->is_valid_avgResponseTime)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("avgResponseTime"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("avgResponseTime")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing avgResponseTime element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%savgResponseTime>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%savgResponseTime>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_1, "%f", (double)_OperationStatistics->property_avgResponseTime);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://util.services.statistics.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://util.services.statistics.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://util.services.statistics.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_OperationStatistics->is_valid_faultCount)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("faultCount"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("faultCount")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing faultCount element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sfaultCount>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sfaultCount>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_2, AXIS2_PRINTF_INT32_FORMAT_SPECIFIER, _OperationStatistics->property_faultCount);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://util.services.statistics.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://util.services.statistics.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://util.services.statistics.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_OperationStatistics->is_valid_maxResponseTime)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("maxResponseTime"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("maxResponseTime")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing maxResponseTime element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%smaxResponseTime>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%smaxResponseTime>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_3, AXIS2_PRINTF_INT64_FORMAT_SPECIFIER, (int64_t) _OperationStatistics->property_maxResponseTime);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_3, axutil_strlen(text_value_3));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://util.services.statistics.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://util.services.statistics.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://util.services.statistics.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_OperationStatistics->is_valid_minResponseTime)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("minResponseTime"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("minResponseTime")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing minResponseTime element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sminResponseTime>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sminResponseTime>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_4, AXIS2_PRINTF_INT64_FORMAT_SPECIFIER, (int64_t) _OperationStatistics->property_minResponseTime);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_4, axutil_strlen(text_value_4));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://util.services.statistics.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://util.services.statistics.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://util.services.statistics.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_OperationStatistics->is_valid_requestCount)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("requestCount"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("requestCount")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing requestCount element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%srequestCount>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%srequestCount>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_5, AXIS2_PRINTF_INT32_FORMAT_SPECIFIER, _OperationStatistics->property_requestCount);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_5, axutil_strlen(text_value_5));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://util.services.statistics.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://util.services.statistics.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://util.services.statistics.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_OperationStatistics->is_valid_responseCount)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("responseCount"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("responseCount")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing responseCount element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sresponseCount>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sresponseCount>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_6, AXIS2_PRINTF_INT32_FORMAT_SPECIFIER, _OperationStatistics->property_responseCount);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_6, axutil_strlen(text_value_6));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for avgResponseTime by  Property Number 1
             */
            double AXIS2_CALL
            adb_OperationStatistics_get_property1(
                adb_OperationStatistics_t* _OperationStatistics,
                const axutil_env_t *env)
            {
                return adb_OperationStatistics_get_avgResponseTime(_OperationStatistics,
                                             env);
            }

            /**
             * getter for avgResponseTime.
             */
            double AXIS2_CALL
            adb_OperationStatistics_get_avgResponseTime(
                    adb_OperationStatistics_t* _OperationStatistics,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (double)0);
                    AXIS2_PARAM_CHECK(env->error, _OperationStatistics, (double)0);
                  

                return _OperationStatistics->property_avgResponseTime;
             }

            /**
             * setter for avgResponseTime
             */
            axis2_status_t AXIS2_CALL
            adb_OperationStatistics_set_avgResponseTime(
                    adb_OperationStatistics_t* _OperationStatistics,
                    const axutil_env_t *env,
                    const double  arg_avgResponseTime)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_FAILURE);
                
                if(_OperationStatistics->is_valid_avgResponseTime &&
                        arg_avgResponseTime == _OperationStatistics->property_avgResponseTime)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_OperationStatistics_reset_avgResponseTime(_OperationStatistics, env);

                _OperationStatistics->property_avgResponseTime = arg_avgResponseTime;
                        _OperationStatistics->is_valid_avgResponseTime = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for avgResponseTime
            */
           axis2_status_t AXIS2_CALL
           adb_OperationStatistics_reset_avgResponseTime(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_FAILURE);
               

               _OperationStatistics->is_valid_avgResponseTime = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether avgResponseTime is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_OperationStatistics_is_avgResponseTime_nil(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_TRUE);
               
               return !_OperationStatistics->is_valid_avgResponseTime;
           }

           /**
            * Set avgResponseTime to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_OperationStatistics_set_avgResponseTime_nil(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               return adb_OperationStatistics_reset_avgResponseTime(_OperationStatistics, env);
           }

           

            /**
             * Getter for faultCount by  Property Number 2
             */
            int AXIS2_CALL
            adb_OperationStatistics_get_property2(
                adb_OperationStatistics_t* _OperationStatistics,
                const axutil_env_t *env)
            {
                return adb_OperationStatistics_get_faultCount(_OperationStatistics,
                                             env);
            }

            /**
             * getter for faultCount.
             */
            int AXIS2_CALL
            adb_OperationStatistics_get_faultCount(
                    adb_OperationStatistics_t* _OperationStatistics,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _OperationStatistics, (int)0);
                  

                return _OperationStatistics->property_faultCount;
             }

            /**
             * setter for faultCount
             */
            axis2_status_t AXIS2_CALL
            adb_OperationStatistics_set_faultCount(
                    adb_OperationStatistics_t* _OperationStatistics,
                    const axutil_env_t *env,
                    const int  arg_faultCount)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_FAILURE);
                
                if(_OperationStatistics->is_valid_faultCount &&
                        arg_faultCount == _OperationStatistics->property_faultCount)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_OperationStatistics_reset_faultCount(_OperationStatistics, env);

                _OperationStatistics->property_faultCount = arg_faultCount;
                        _OperationStatistics->is_valid_faultCount = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for faultCount
            */
           axis2_status_t AXIS2_CALL
           adb_OperationStatistics_reset_faultCount(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_FAILURE);
               

               _OperationStatistics->is_valid_faultCount = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether faultCount is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_OperationStatistics_is_faultCount_nil(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_TRUE);
               
               return !_OperationStatistics->is_valid_faultCount;
           }

           /**
            * Set faultCount to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_OperationStatistics_set_faultCount_nil(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               return adb_OperationStatistics_reset_faultCount(_OperationStatistics, env);
           }

           

            /**
             * Getter for maxResponseTime by  Property Number 3
             */
            int64_t AXIS2_CALL
            adb_OperationStatistics_get_property3(
                adb_OperationStatistics_t* _OperationStatistics,
                const axutil_env_t *env)
            {
                return adb_OperationStatistics_get_maxResponseTime(_OperationStatistics,
                                             env);
            }

            /**
             * getter for maxResponseTime.
             */
            int64_t AXIS2_CALL
            adb_OperationStatistics_get_maxResponseTime(
                    adb_OperationStatistics_t* _OperationStatistics,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int64_t)0);
                    AXIS2_PARAM_CHECK(env->error, _OperationStatistics, (int64_t)0);
                  

                return _OperationStatistics->property_maxResponseTime;
             }

            /**
             * setter for maxResponseTime
             */
            axis2_status_t AXIS2_CALL
            adb_OperationStatistics_set_maxResponseTime(
                    adb_OperationStatistics_t* _OperationStatistics,
                    const axutil_env_t *env,
                    const int64_t  arg_maxResponseTime)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_FAILURE);
                
                if(_OperationStatistics->is_valid_maxResponseTime &&
                        arg_maxResponseTime == _OperationStatistics->property_maxResponseTime)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_OperationStatistics_reset_maxResponseTime(_OperationStatistics, env);

                _OperationStatistics->property_maxResponseTime = arg_maxResponseTime;
                        _OperationStatistics->is_valid_maxResponseTime = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for maxResponseTime
            */
           axis2_status_t AXIS2_CALL
           adb_OperationStatistics_reset_maxResponseTime(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_FAILURE);
               

               _OperationStatistics->is_valid_maxResponseTime = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether maxResponseTime is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_OperationStatistics_is_maxResponseTime_nil(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_TRUE);
               
               return !_OperationStatistics->is_valid_maxResponseTime;
           }

           /**
            * Set maxResponseTime to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_OperationStatistics_set_maxResponseTime_nil(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               return adb_OperationStatistics_reset_maxResponseTime(_OperationStatistics, env);
           }

           

            /**
             * Getter for minResponseTime by  Property Number 4
             */
            int64_t AXIS2_CALL
            adb_OperationStatistics_get_property4(
                adb_OperationStatistics_t* _OperationStatistics,
                const axutil_env_t *env)
            {
                return adb_OperationStatistics_get_minResponseTime(_OperationStatistics,
                                             env);
            }

            /**
             * getter for minResponseTime.
             */
            int64_t AXIS2_CALL
            adb_OperationStatistics_get_minResponseTime(
                    adb_OperationStatistics_t* _OperationStatistics,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int64_t)0);
                    AXIS2_PARAM_CHECK(env->error, _OperationStatistics, (int64_t)0);
                  

                return _OperationStatistics->property_minResponseTime;
             }

            /**
             * setter for minResponseTime
             */
            axis2_status_t AXIS2_CALL
            adb_OperationStatistics_set_minResponseTime(
                    adb_OperationStatistics_t* _OperationStatistics,
                    const axutil_env_t *env,
                    const int64_t  arg_minResponseTime)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_FAILURE);
                
                if(_OperationStatistics->is_valid_minResponseTime &&
                        arg_minResponseTime == _OperationStatistics->property_minResponseTime)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_OperationStatistics_reset_minResponseTime(_OperationStatistics, env);

                _OperationStatistics->property_minResponseTime = arg_minResponseTime;
                        _OperationStatistics->is_valid_minResponseTime = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for minResponseTime
            */
           axis2_status_t AXIS2_CALL
           adb_OperationStatistics_reset_minResponseTime(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_FAILURE);
               

               _OperationStatistics->is_valid_minResponseTime = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether minResponseTime is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_OperationStatistics_is_minResponseTime_nil(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_TRUE);
               
               return !_OperationStatistics->is_valid_minResponseTime;
           }

           /**
            * Set minResponseTime to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_OperationStatistics_set_minResponseTime_nil(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               return adb_OperationStatistics_reset_minResponseTime(_OperationStatistics, env);
           }

           

            /**
             * Getter for requestCount by  Property Number 5
             */
            int AXIS2_CALL
            adb_OperationStatistics_get_property5(
                adb_OperationStatistics_t* _OperationStatistics,
                const axutil_env_t *env)
            {
                return adb_OperationStatistics_get_requestCount(_OperationStatistics,
                                             env);
            }

            /**
             * getter for requestCount.
             */
            int AXIS2_CALL
            adb_OperationStatistics_get_requestCount(
                    adb_OperationStatistics_t* _OperationStatistics,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _OperationStatistics, (int)0);
                  

                return _OperationStatistics->property_requestCount;
             }

            /**
             * setter for requestCount
             */
            axis2_status_t AXIS2_CALL
            adb_OperationStatistics_set_requestCount(
                    adb_OperationStatistics_t* _OperationStatistics,
                    const axutil_env_t *env,
                    const int  arg_requestCount)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_FAILURE);
                
                if(_OperationStatistics->is_valid_requestCount &&
                        arg_requestCount == _OperationStatistics->property_requestCount)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_OperationStatistics_reset_requestCount(_OperationStatistics, env);

                _OperationStatistics->property_requestCount = arg_requestCount;
                        _OperationStatistics->is_valid_requestCount = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for requestCount
            */
           axis2_status_t AXIS2_CALL
           adb_OperationStatistics_reset_requestCount(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_FAILURE);
               

               _OperationStatistics->is_valid_requestCount = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether requestCount is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_OperationStatistics_is_requestCount_nil(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_TRUE);
               
               return !_OperationStatistics->is_valid_requestCount;
           }

           /**
            * Set requestCount to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_OperationStatistics_set_requestCount_nil(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               return adb_OperationStatistics_reset_requestCount(_OperationStatistics, env);
           }

           

            /**
             * Getter for responseCount by  Property Number 6
             */
            int AXIS2_CALL
            adb_OperationStatistics_get_property6(
                adb_OperationStatistics_t* _OperationStatistics,
                const axutil_env_t *env)
            {
                return adb_OperationStatistics_get_responseCount(_OperationStatistics,
                                             env);
            }

            /**
             * getter for responseCount.
             */
            int AXIS2_CALL
            adb_OperationStatistics_get_responseCount(
                    adb_OperationStatistics_t* _OperationStatistics,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _OperationStatistics, (int)0);
                  

                return _OperationStatistics->property_responseCount;
             }

            /**
             * setter for responseCount
             */
            axis2_status_t AXIS2_CALL
            adb_OperationStatistics_set_responseCount(
                    adb_OperationStatistics_t* _OperationStatistics,
                    const axutil_env_t *env,
                    const int  arg_responseCount)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_FAILURE);
                
                if(_OperationStatistics->is_valid_responseCount &&
                        arg_responseCount == _OperationStatistics->property_responseCount)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_OperationStatistics_reset_responseCount(_OperationStatistics, env);

                _OperationStatistics->property_responseCount = arg_responseCount;
                        _OperationStatistics->is_valid_responseCount = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for responseCount
            */
           axis2_status_t AXIS2_CALL
           adb_OperationStatistics_reset_responseCount(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_FAILURE);
               

               _OperationStatistics->is_valid_responseCount = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether responseCount is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_OperationStatistics_is_responseCount_nil(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _OperationStatistics, AXIS2_TRUE);
               
               return !_OperationStatistics->is_valid_responseCount;
           }

           /**
            * Set responseCount to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_OperationStatistics_set_responseCount_nil(
                   adb_OperationStatistics_t* _OperationStatistics,
                   const axutil_env_t *env)
           {
               return adb_OperationStatistics_reset_responseCount(_OperationStatistics, env);
           }

           

