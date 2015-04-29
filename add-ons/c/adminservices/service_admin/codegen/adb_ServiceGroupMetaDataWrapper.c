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
         * adb_ServiceGroupMetaDataWrapper.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_ServiceGroupMetaDataWrapper.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = ServiceGroupMetaDataWrapper
                 * Namespace URI = http://mgt.service.carbon.wso2.org/xsd
                 * Namespace Prefix = ns4
                 */
           


        struct adb_ServiceGroupMetaDataWrapper
        {
            axis2_char_t *property_Type;

            axutil_array_list_t* property_metadataList;

                
                axis2_bool_t is_valid_metadataList;
            int property_numberOfCorrectServiceGroups;

                
                axis2_bool_t is_valid_numberOfCorrectServiceGroups;
            int property_numberOfFaultyServiceGroups;

                
                axis2_bool_t is_valid_numberOfFaultyServiceGroups;
            int property_numberOfPages;

                
                axis2_bool_t is_valid_numberOfPages;
            axutil_array_list_t* property_serviceTypes;

                
                axis2_bool_t is_valid_serviceTypes;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_ServiceGroupMetaDataWrapper_set_numberOfCorrectServiceGroups_nil(
                        adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_ServiceGroupMetaDataWrapper_set_numberOfFaultyServiceGroups_nil(
                        adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_ServiceGroupMetaDataWrapper_set_numberOfPages_nil(
                        adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_ServiceGroupMetaDataWrapper_t* AXIS2_CALL
        adb_ServiceGroupMetaDataWrapper_create(
            const axutil_env_t *env)
        {
            adb_ServiceGroupMetaDataWrapper_t *_ServiceGroupMetaDataWrapper = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _ServiceGroupMetaDataWrapper = (adb_ServiceGroupMetaDataWrapper_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_ServiceGroupMetaDataWrapper_t));

            if(NULL == _ServiceGroupMetaDataWrapper)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_ServiceGroupMetaDataWrapper, 0, sizeof(adb_ServiceGroupMetaDataWrapper_t));

            _ServiceGroupMetaDataWrapper->property_Type = axutil_strdup(env, "adb_ServiceGroupMetaDataWrapper");
            _ServiceGroupMetaDataWrapper->property_metadataList  = NULL;
                  _ServiceGroupMetaDataWrapper->is_valid_metadataList  = AXIS2_FALSE;
            _ServiceGroupMetaDataWrapper->is_valid_numberOfCorrectServiceGroups  = AXIS2_FALSE;
            _ServiceGroupMetaDataWrapper->is_valid_numberOfFaultyServiceGroups  = AXIS2_FALSE;
            _ServiceGroupMetaDataWrapper->is_valid_numberOfPages  = AXIS2_FALSE;
            _ServiceGroupMetaDataWrapper->property_serviceTypes  = NULL;
                  _ServiceGroupMetaDataWrapper->is_valid_serviceTypes  = AXIS2_FALSE;
            

            return _ServiceGroupMetaDataWrapper;
        }

        adb_ServiceGroupMetaDataWrapper_t* AXIS2_CALL
        adb_ServiceGroupMetaDataWrapper_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _metadataList,
                int _numberOfCorrectServiceGroups,
                int _numberOfFaultyServiceGroups,
                int _numberOfPages,
                axutil_array_list_t* _serviceTypes)
        {
            adb_ServiceGroupMetaDataWrapper_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_ServiceGroupMetaDataWrapper_create(env);

            
              status = adb_ServiceGroupMetaDataWrapper_set_metadataList(
                                     adb_obj,
                                     env,
                                     _metadataList);
              if(status == AXIS2_FAILURE) {
                  adb_ServiceGroupMetaDataWrapper_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ServiceGroupMetaDataWrapper_set_numberOfCorrectServiceGroups(
                                     adb_obj,
                                     env,
                                     _numberOfCorrectServiceGroups);
              if(status == AXIS2_FAILURE) {
                  adb_ServiceGroupMetaDataWrapper_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ServiceGroupMetaDataWrapper_set_numberOfFaultyServiceGroups(
                                     adb_obj,
                                     env,
                                     _numberOfFaultyServiceGroups);
              if(status == AXIS2_FAILURE) {
                  adb_ServiceGroupMetaDataWrapper_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ServiceGroupMetaDataWrapper_set_numberOfPages(
                                     adb_obj,
                                     env,
                                     _numberOfPages);
              if(status == AXIS2_FAILURE) {
                  adb_ServiceGroupMetaDataWrapper_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ServiceGroupMetaDataWrapper_set_serviceTypes(
                                     adb_obj,
                                     env,
                                     _serviceTypes);
              if(status == AXIS2_FAILURE) {
                  adb_ServiceGroupMetaDataWrapper_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_array_list_t* AXIS2_CALL
                adb_ServiceGroupMetaDataWrapper_free_popping_value(
                        adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                        const axutil_env_t *env)
                {
                    axutil_array_list_t* value;

                    
                    
                    value = _ServiceGroupMetaDataWrapper->property_metadataList;

                    _ServiceGroupMetaDataWrapper->property_metadataList = (axutil_array_list_t*)NULL;
                    adb_ServiceGroupMetaDataWrapper_free(_ServiceGroupMetaDataWrapper, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_ServiceGroupMetaDataWrapper_free(
                adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_type_t*) _ServiceGroupMetaDataWrapper,
                env,
                "adb_ServiceGroupMetaDataWrapper");
            
        }

        axis2_status_t AXIS2_CALL
        adb_ServiceGroupMetaDataWrapper_free_obj(
                adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);

            if (_ServiceGroupMetaDataWrapper->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _ServiceGroupMetaDataWrapper->property_Type);
            }

            adb_ServiceGroupMetaDataWrapper_reset_metadataList(_ServiceGroupMetaDataWrapper, env);
            adb_ServiceGroupMetaDataWrapper_reset_numberOfCorrectServiceGroups(_ServiceGroupMetaDataWrapper, env);
            adb_ServiceGroupMetaDataWrapper_reset_numberOfFaultyServiceGroups(_ServiceGroupMetaDataWrapper, env);
            adb_ServiceGroupMetaDataWrapper_reset_numberOfPages(_ServiceGroupMetaDataWrapper, env);
            adb_ServiceGroupMetaDataWrapper_reset_serviceTypes(_ServiceGroupMetaDataWrapper, env);
            

            if(_ServiceGroupMetaDataWrapper)
            {
                AXIS2_FREE(env->allocator, _ServiceGroupMetaDataWrapper);
                _ServiceGroupMetaDataWrapper = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_ServiceGroupMetaDataWrapper_deserialize(
                adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_type_t*) _ServiceGroupMetaDataWrapper,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_ServiceGroupMetaDataWrapper");
            
        }

        axis2_status_t AXIS2_CALL
        adb_ServiceGroupMetaDataWrapper_deserialize_obj(
                adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
          
              void *element = NULL;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
               int i = 0;
               axutil_array_list_t *arr_list = NULL;
            
               int sequence_broken = 0;
               axiom_node_t *tmp_node = NULL;
            
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for ServiceGroupMetaDataWrapper : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                    /*
                     * building metadataList array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building metadataList element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "metadataList", "http://mgt.service.carbon.wso2.org/xsd", NULL);
                                  
                               
                               for (i = 0, sequence_broken = 0, current_node = first_node; !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                  current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                  qname = axiom_element_get_qname(current_element, env, current_node);

                                  if (adb_ServiceGroupMetaData_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_ServiceGroupMetaData");
                                          
                                          status =  adb_ServiceGroupMetaData_deserialize((adb_ServiceGroupMetaData_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element metadataList ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for metadataList ");
                                         if(element_qname)
                                         {
                                            axutil_qname_free(element_qname, env);
                                         }
                                         if(arr_list)
                                         {
                                            axutil_array_list_free(arr_list, env);
                                         }
                                         return AXIS2_FAILURE;
                                     }

                                     i ++;
                                    current_node = axiom_node_get_next_sibling(current_node, env);
                                  }
                                  else
                                  {
                                      is_early_node_valid = AXIS2_FALSE;
                                      sequence_broken = 1;
                                  }
                                  
                               }

                               
                                   if (i < 0)
                                   {
                                     /* found element out of order */
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "metadataList (@minOccurs = '0') only have %d elements", i);
                                     if(element_qname)
                                     {
                                        axutil_qname_free(element_qname, env);
                                     }
                                     if(arr_list)
                                     {
                                        axutil_array_list_free(arr_list, env);
                                     }
                                     return AXIS2_FAILURE;
                                   }
                               

                               if(0 == axutil_array_list_size(arr_list,env))
                               {
                                    axutil_array_list_free(arr_list, env);
                               }
                               else
                               {
                                    status = adb_ServiceGroupMetaDataWrapper_set_metadataList(_ServiceGroupMetaDataWrapper, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building numberOfCorrectServiceGroups element
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
                                 
                                 element_qname = axutil_qname_create(env, "numberOfCorrectServiceGroups", "http://mgt.service.carbon.wso2.org/xsd", NULL);
                                 

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
                                            status = adb_ServiceGroupMetaDataWrapper_set_numberOfCorrectServiceGroups(_ServiceGroupMetaDataWrapper, env,
                                                                   atoi(text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element numberOfCorrectServiceGroups");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for numberOfCorrectServiceGroups ");
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
                      * building numberOfFaultyServiceGroups element
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
                                 
                                 element_qname = axutil_qname_create(env, "numberOfFaultyServiceGroups", "http://mgt.service.carbon.wso2.org/xsd", NULL);
                                 

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
                                            status = adb_ServiceGroupMetaDataWrapper_set_numberOfFaultyServiceGroups(_ServiceGroupMetaDataWrapper, env,
                                                                   atoi(text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element numberOfFaultyServiceGroups");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for numberOfFaultyServiceGroups ");
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
                      * building numberOfPages element
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
                                 
                                 element_qname = axutil_qname_create(env, "numberOfPages", "http://mgt.service.carbon.wso2.org/xsd", NULL);
                                 

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
                                            status = adb_ServiceGroupMetaDataWrapper_set_numberOfPages(_ServiceGroupMetaDataWrapper, env,
                                                                   atoi(text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element numberOfPages");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for numberOfPages ");
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
                     * building serviceTypes array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building serviceTypes element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "serviceTypes", "http://mgt.service.carbon.wso2.org/xsd", NULL);
                                  
                               
                               for (i = 0, sequence_broken = 0, current_node = (is_early_node_valid?axiom_node_get_next_sibling(current_node, env):current_node); !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                  current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                  qname = axiom_element_get_qname(current_element, env, current_node);

                                  if ( 
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = axiom_element_get_text(current_element, env, current_node);
                                          if(text_value != NULL)
                                          {
                                              axutil_array_list_add_at(arr_list, env, i, axutil_strdup(env, text_value));
                                          }
                                          
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for serviceTypes ");
                                         if(element_qname)
                                         {
                                            axutil_qname_free(element_qname, env);
                                         }
                                         if(arr_list)
                                         {
                                            axutil_array_list_free(arr_list, env);
                                         }
                                         return AXIS2_FAILURE;
                                     }

                                     i ++;
                                    current_node = axiom_node_get_next_sibling(current_node, env);
                                  }
                                  else
                                  {
                                      is_early_node_valid = AXIS2_FALSE;
                                      sequence_broken = 1;
                                  }
                                  
                               }

                               
                                   if (i < 0)
                                   {
                                     /* found element out of order */
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "serviceTypes (@minOccurs = '0') only have %d elements", i);
                                     if(element_qname)
                                     {
                                        axutil_qname_free(element_qname, env);
                                     }
                                     if(arr_list)
                                     {
                                        axutil_array_list_free(arr_list, env);
                                     }
                                     return AXIS2_FAILURE;
                                   }
                               

                               if(0 == axutil_array_list_size(arr_list,env))
                               {
                                    axutil_array_list_free(arr_list, env);
                               }
                               else
                               {
                                    status = adb_ServiceGroupMetaDataWrapper_set_serviceTypes(_ServiceGroupMetaDataWrapper, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_ServiceGroupMetaDataWrapper_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_ServiceGroupMetaDataWrapper_declare_parent_namespaces(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_ServiceGroupMetaDataWrapper_serialize(
                adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_ServiceGroupMetaDataWrapper == NULL)
            {
                return adb_ServiceGroupMetaDataWrapper_serialize_obj(
                    _ServiceGroupMetaDataWrapper, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_type_t*) _ServiceGroupMetaDataWrapper, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_ServiceGroupMetaDataWrapper");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_ServiceGroupMetaDataWrapper_serialize_obj(
                adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
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
            
               int i = 0;
               int count = 0;
               void *element = NULL;
             
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_3[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_4[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_5;
                    axis2_char_t *text_value_5_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, NULL);
            
            
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
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"ServiceGroupMetaDataWrapper\"", NULL);
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
                                 "http://mgt.service.carbon.wso2.org/xsd",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "ServiceGroupMetaDataWrapper", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://mgt.service.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_ServiceGroupMetaDataWrapper->is_valid_metadataList)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("metadataList"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("metadataList")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing metadataList array
                      */
                     if (_ServiceGroupMetaDataWrapper->property_metadataList != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%smetadataList",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%smetadataList>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_ServiceGroupMetaDataWrapper->property_metadataList, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_metadataList, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing metadataList element
                      */

                    
                     
                            if(!adb_ServiceGroupMetaData_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_ServiceGroupMetaData_serialize((adb_ServiceGroupMetaData_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_ServiceGroupMetaData_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_ServiceGroupMetaData_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://mgt.service.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_ServiceGroupMetaDataWrapper->is_valid_numberOfCorrectServiceGroups)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("numberOfCorrectServiceGroups"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("numberOfCorrectServiceGroups")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing numberOfCorrectServiceGroups element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%snumberOfCorrectServiceGroups>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%snumberOfCorrectServiceGroups>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_2, AXIS2_PRINTF_INT32_FORMAT_SPECIFIER, _ServiceGroupMetaDataWrapper->property_numberOfCorrectServiceGroups);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://mgt.service.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_ServiceGroupMetaDataWrapper->is_valid_numberOfFaultyServiceGroups)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("numberOfFaultyServiceGroups"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("numberOfFaultyServiceGroups")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing numberOfFaultyServiceGroups element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%snumberOfFaultyServiceGroups>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%snumberOfFaultyServiceGroups>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_3, AXIS2_PRINTF_INT32_FORMAT_SPECIFIER, _ServiceGroupMetaDataWrapper->property_numberOfFaultyServiceGroups);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_3, axutil_strlen(text_value_3));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://mgt.service.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_ServiceGroupMetaDataWrapper->is_valid_numberOfPages)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("numberOfPages"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("numberOfPages")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing numberOfPages element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%snumberOfPages>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%snumberOfPages>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_4, AXIS2_PRINTF_INT32_FORMAT_SPECIFIER, _ServiceGroupMetaDataWrapper->property_numberOfPages);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_4, axutil_strlen(text_value_4));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://mgt.service.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_ServiceGroupMetaDataWrapper->is_valid_serviceTypes)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("serviceTypes"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("serviceTypes")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing serviceTypes array
                      */
                     if (_ServiceGroupMetaDataWrapper->property_serviceTypes != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%sserviceTypes>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sserviceTypes>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_ServiceGroupMetaDataWrapper->property_serviceTypes, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_serviceTypes, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing serviceTypes element
                      */

                    
                    
                           text_value_5 = (axis2_char_t*)element;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_5_temp = axutil_xml_quote_string(env, text_value_5, AXIS2_TRUE);
                           if (text_value_5_temp)
                           {
                               axutil_stream_write(stream, env, text_value_5_temp, axutil_strlen(text_value_5_temp));
                               AXIS2_FREE(env->allocator, text_value_5_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_5, axutil_strlen(text_value_5));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for metadataList by  Property Number 1
             */
            axutil_array_list_t* AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_get_property1(
                adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                const axutil_env_t *env)
            {
                return adb_ServiceGroupMetaDataWrapper_get_metadataList(_ServiceGroupMetaDataWrapper,
                                             env);
            }

            /**
             * getter for metadataList.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_get_metadataList(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, NULL);
                  

                return _ServiceGroupMetaDataWrapper->property_metadataList;
             }

            /**
             * setter for metadataList
             */
            axis2_status_t AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_set_metadataList(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_metadataList)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);
                
                if(_ServiceGroupMetaDataWrapper->is_valid_metadataList &&
                        arg_metadataList == _ServiceGroupMetaDataWrapper->property_metadataList)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_metadataList, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "metadataList has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_metadataList, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_ServiceGroupMetaDataWrapper_reset_metadataList(_ServiceGroupMetaDataWrapper, env);

                
                if(NULL == arg_metadataList)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ServiceGroupMetaDataWrapper->property_metadataList = arg_metadataList;
                        if(non_nil_exists)
                        {
                            _ServiceGroupMetaDataWrapper->is_valid_metadataList = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of metadataList.
             */
            adb_ServiceGroupMetaData_t* AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_get_metadataList_at(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env, int i)
            {
                adb_ServiceGroupMetaData_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, NULL);
                  

                if(_ServiceGroupMetaDataWrapper->property_metadataList == NULL)
                {
                    return (adb_ServiceGroupMetaData_t*)0;
                }
                ret_val = (adb_ServiceGroupMetaData_t*)axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_metadataList, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of metadataList.
             */
            axis2_status_t AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_set_metadataList_at(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env, int i,
                    adb_ServiceGroupMetaData_t* arg_metadataList)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);
                
                if( _ServiceGroupMetaDataWrapper->is_valid_metadataList &&
                    _ServiceGroupMetaDataWrapper->property_metadataList &&
                
                    arg_metadataList == (adb_ServiceGroupMetaData_t*)axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_metadataList, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_metadataList)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_ServiceGroupMetaDataWrapper->property_metadataList != NULL)
                        {
                            size = axutil_array_list_size(_ServiceGroupMetaDataWrapper->property_metadataList, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_metadataList, env, i))
                                {
                                    non_nil_count ++;
                                    non_nil_exists = AXIS2_TRUE;
                                    if(non_nil_count >= 0)
                                    {
                                        break;
                                    }
                                }
                            }

                        
                        }
                    }
                  

                if(_ServiceGroupMetaDataWrapper->property_metadataList == NULL)
                {
                    _ServiceGroupMetaDataWrapper->property_metadataList = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_metadataList, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_ServiceGroupMetaData_free((adb_ServiceGroupMetaData_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _ServiceGroupMetaDataWrapper->is_valid_metadataList = AXIS2_FALSE;
                        axutil_array_list_set(_ServiceGroupMetaDataWrapper->property_metadataList , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_ServiceGroupMetaDataWrapper->property_metadataList , env, i, arg_metadataList);
                  _ServiceGroupMetaDataWrapper->is_valid_metadataList = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to metadataList.
             */
            axis2_status_t AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_add_metadataList(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env,
                    adb_ServiceGroupMetaData_t* arg_metadataList)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);

                
                    if(NULL == arg_metadataList)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_ServiceGroupMetaDataWrapper->property_metadataList == NULL)
                {
                    _ServiceGroupMetaDataWrapper->property_metadataList = axutil_array_list_create(env, 10);
                }
                if(_ServiceGroupMetaDataWrapper->property_metadataList == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for metadataList");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_ServiceGroupMetaDataWrapper->property_metadataList , env, arg_metadataList);
                  _ServiceGroupMetaDataWrapper->is_valid_metadataList = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the metadataList array.
             */
            int AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_sizeof_metadataList(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, -1);
                if(_ServiceGroupMetaDataWrapper->property_metadataList == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_ServiceGroupMetaDataWrapper->property_metadataList, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_remove_metadataList_at(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env, int i)
            {
                return adb_ServiceGroupMetaDataWrapper_set_metadataList_nil_at(_ServiceGroupMetaDataWrapper, env, i);
            }

            

           /**
            * resetter for metadataList
            */
           axis2_status_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_reset_metadataList(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);
               

               
                  if (_ServiceGroupMetaDataWrapper->property_metadataList != NULL)
                  {
                      count = axutil_array_list_size(_ServiceGroupMetaDataWrapper->property_metadataList, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_metadataList, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_ServiceGroupMetaData_free((adb_ServiceGroupMetaData_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_ServiceGroupMetaDataWrapper->property_metadataList, env);
                  }
                _ServiceGroupMetaDataWrapper->is_valid_metadataList = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether metadataList is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_is_metadataList_nil(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_TRUE);
               
               return !_ServiceGroupMetaDataWrapper->is_valid_metadataList;
           }

           /**
            * Set metadataList to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_set_metadataList_nil(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env)
           {
               return adb_ServiceGroupMetaDataWrapper_reset_metadataList(_ServiceGroupMetaDataWrapper, env);
           }

           
           /**
            * Check whether metadataList is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_is_metadataList_nil_at(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_TRUE);
               
               return (_ServiceGroupMetaDataWrapper->is_valid_metadataList == AXIS2_FALSE ||
                        NULL == _ServiceGroupMetaDataWrapper->property_metadataList || 
                        NULL == axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_metadataList, env, i));
           }

           /**
            * Set metadataList to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_set_metadataList_nil_at(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);

                if(_ServiceGroupMetaDataWrapper->property_metadataList == NULL ||
                            _ServiceGroupMetaDataWrapper->is_valid_metadataList == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_ServiceGroupMetaDataWrapper->property_metadataList, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_metadataList, env, i))
                        {
                            k ++;
                            non_nil_exists = AXIS2_TRUE;
                            if( k >= 0)
                            {
                                break;
                            }
                        }
                    }
                }
                

                if( k < 0)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of metadataList is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_ServiceGroupMetaDataWrapper->property_metadataList == NULL)
                {
                    _ServiceGroupMetaDataWrapper->is_valid_metadataList = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_metadataList, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_ServiceGroupMetaData_free((adb_ServiceGroupMetaData_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _ServiceGroupMetaDataWrapper->is_valid_metadataList = AXIS2_FALSE;
                        axutil_array_list_set(_ServiceGroupMetaDataWrapper->property_metadataList , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_ServiceGroupMetaDataWrapper->property_metadataList , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for numberOfCorrectServiceGroups by  Property Number 2
             */
            int AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_get_property2(
                adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                const axutil_env_t *env)
            {
                return adb_ServiceGroupMetaDataWrapper_get_numberOfCorrectServiceGroups(_ServiceGroupMetaDataWrapper,
                                             env);
            }

            /**
             * getter for numberOfCorrectServiceGroups.
             */
            int AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_get_numberOfCorrectServiceGroups(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, (int)0);
                  

                return _ServiceGroupMetaDataWrapper->property_numberOfCorrectServiceGroups;
             }

            /**
             * setter for numberOfCorrectServiceGroups
             */
            axis2_status_t AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_set_numberOfCorrectServiceGroups(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env,
                    const int  arg_numberOfCorrectServiceGroups)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);
                
                if(_ServiceGroupMetaDataWrapper->is_valid_numberOfCorrectServiceGroups &&
                        arg_numberOfCorrectServiceGroups == _ServiceGroupMetaDataWrapper->property_numberOfCorrectServiceGroups)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_ServiceGroupMetaDataWrapper_reset_numberOfCorrectServiceGroups(_ServiceGroupMetaDataWrapper, env);

                _ServiceGroupMetaDataWrapper->property_numberOfCorrectServiceGroups = arg_numberOfCorrectServiceGroups;
                        _ServiceGroupMetaDataWrapper->is_valid_numberOfCorrectServiceGroups = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for numberOfCorrectServiceGroups
            */
           axis2_status_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_reset_numberOfCorrectServiceGroups(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);
               

               _ServiceGroupMetaDataWrapper->is_valid_numberOfCorrectServiceGroups = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether numberOfCorrectServiceGroups is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_is_numberOfCorrectServiceGroups_nil(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_TRUE);
               
               return !_ServiceGroupMetaDataWrapper->is_valid_numberOfCorrectServiceGroups;
           }

           /**
            * Set numberOfCorrectServiceGroups to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_set_numberOfCorrectServiceGroups_nil(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env)
           {
               return adb_ServiceGroupMetaDataWrapper_reset_numberOfCorrectServiceGroups(_ServiceGroupMetaDataWrapper, env);
           }

           

            /**
             * Getter for numberOfFaultyServiceGroups by  Property Number 3
             */
            int AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_get_property3(
                adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                const axutil_env_t *env)
            {
                return adb_ServiceGroupMetaDataWrapper_get_numberOfFaultyServiceGroups(_ServiceGroupMetaDataWrapper,
                                             env);
            }

            /**
             * getter for numberOfFaultyServiceGroups.
             */
            int AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_get_numberOfFaultyServiceGroups(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, (int)0);
                  

                return _ServiceGroupMetaDataWrapper->property_numberOfFaultyServiceGroups;
             }

            /**
             * setter for numberOfFaultyServiceGroups
             */
            axis2_status_t AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_set_numberOfFaultyServiceGroups(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env,
                    const int  arg_numberOfFaultyServiceGroups)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);
                
                if(_ServiceGroupMetaDataWrapper->is_valid_numberOfFaultyServiceGroups &&
                        arg_numberOfFaultyServiceGroups == _ServiceGroupMetaDataWrapper->property_numberOfFaultyServiceGroups)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_ServiceGroupMetaDataWrapper_reset_numberOfFaultyServiceGroups(_ServiceGroupMetaDataWrapper, env);

                _ServiceGroupMetaDataWrapper->property_numberOfFaultyServiceGroups = arg_numberOfFaultyServiceGroups;
                        _ServiceGroupMetaDataWrapper->is_valid_numberOfFaultyServiceGroups = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for numberOfFaultyServiceGroups
            */
           axis2_status_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_reset_numberOfFaultyServiceGroups(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);
               

               _ServiceGroupMetaDataWrapper->is_valid_numberOfFaultyServiceGroups = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether numberOfFaultyServiceGroups is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_is_numberOfFaultyServiceGroups_nil(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_TRUE);
               
               return !_ServiceGroupMetaDataWrapper->is_valid_numberOfFaultyServiceGroups;
           }

           /**
            * Set numberOfFaultyServiceGroups to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_set_numberOfFaultyServiceGroups_nil(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env)
           {
               return adb_ServiceGroupMetaDataWrapper_reset_numberOfFaultyServiceGroups(_ServiceGroupMetaDataWrapper, env);
           }

           

            /**
             * Getter for numberOfPages by  Property Number 4
             */
            int AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_get_property4(
                adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                const axutil_env_t *env)
            {
                return adb_ServiceGroupMetaDataWrapper_get_numberOfPages(_ServiceGroupMetaDataWrapper,
                                             env);
            }

            /**
             * getter for numberOfPages.
             */
            int AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_get_numberOfPages(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, (int)0);
                  

                return _ServiceGroupMetaDataWrapper->property_numberOfPages;
             }

            /**
             * setter for numberOfPages
             */
            axis2_status_t AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_set_numberOfPages(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env,
                    const int  arg_numberOfPages)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);
                
                if(_ServiceGroupMetaDataWrapper->is_valid_numberOfPages &&
                        arg_numberOfPages == _ServiceGroupMetaDataWrapper->property_numberOfPages)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_ServiceGroupMetaDataWrapper_reset_numberOfPages(_ServiceGroupMetaDataWrapper, env);

                _ServiceGroupMetaDataWrapper->property_numberOfPages = arg_numberOfPages;
                        _ServiceGroupMetaDataWrapper->is_valid_numberOfPages = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for numberOfPages
            */
           axis2_status_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_reset_numberOfPages(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);
               

               _ServiceGroupMetaDataWrapper->is_valid_numberOfPages = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether numberOfPages is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_is_numberOfPages_nil(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_TRUE);
               
               return !_ServiceGroupMetaDataWrapper->is_valid_numberOfPages;
           }

           /**
            * Set numberOfPages to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_set_numberOfPages_nil(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env)
           {
               return adb_ServiceGroupMetaDataWrapper_reset_numberOfPages(_ServiceGroupMetaDataWrapper, env);
           }

           

            /**
             * Getter for serviceTypes by  Property Number 5
             */
            axutil_array_list_t* AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_get_property5(
                adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                const axutil_env_t *env)
            {
                return adb_ServiceGroupMetaDataWrapper_get_serviceTypes(_ServiceGroupMetaDataWrapper,
                                             env);
            }

            /**
             * getter for serviceTypes.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_get_serviceTypes(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, NULL);
                  

                return _ServiceGroupMetaDataWrapper->property_serviceTypes;
             }

            /**
             * setter for serviceTypes
             */
            axis2_status_t AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_set_serviceTypes(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_serviceTypes)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);
                
                if(_ServiceGroupMetaDataWrapper->is_valid_serviceTypes &&
                        arg_serviceTypes == _ServiceGroupMetaDataWrapper->property_serviceTypes)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_serviceTypes, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "serviceTypes has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_serviceTypes, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_ServiceGroupMetaDataWrapper_reset_serviceTypes(_ServiceGroupMetaDataWrapper, env);

                
                if(NULL == arg_serviceTypes)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ServiceGroupMetaDataWrapper->property_serviceTypes = arg_serviceTypes;
                        if(non_nil_exists)
                        {
                            _ServiceGroupMetaDataWrapper->is_valid_serviceTypes = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of serviceTypes.
             */
            axis2_char_t* AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_get_serviceTypes_at(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env, int i)
            {
                axis2_char_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, NULL);
                  

                if(_ServiceGroupMetaDataWrapper->property_serviceTypes == NULL)
                {
                    return (axis2_char_t*)0;
                }
                ret_val = (axis2_char_t*)axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_serviceTypes, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of serviceTypes.
             */
            axis2_status_t AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_set_serviceTypes_at(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env, int i,
                    const axis2_char_t* arg_serviceTypes)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);
                
                if( _ServiceGroupMetaDataWrapper->is_valid_serviceTypes &&
                    _ServiceGroupMetaDataWrapper->property_serviceTypes &&
                
                    arg_serviceTypes == (axis2_char_t*)axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_serviceTypes, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_serviceTypes)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_ServiceGroupMetaDataWrapper->property_serviceTypes != NULL)
                        {
                            size = axutil_array_list_size(_ServiceGroupMetaDataWrapper->property_serviceTypes, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_serviceTypes, env, i))
                                {
                                    non_nil_count ++;
                                    non_nil_exists = AXIS2_TRUE;
                                    if(non_nil_count >= 0)
                                    {
                                        break;
                                    }
                                }
                            }

                        
                        }
                    }
                  

                if(_ServiceGroupMetaDataWrapper->property_serviceTypes == NULL)
                {
                    _ServiceGroupMetaDataWrapper->property_serviceTypes = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_serviceTypes, env, i);
                if(NULL != element)
                {
                  
                  
                  
                       /* This is an unknown type or a primitive. Please free this manually*/
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _ServiceGroupMetaDataWrapper->is_valid_serviceTypes = AXIS2_FALSE;
                        axutil_array_list_set(_ServiceGroupMetaDataWrapper->property_serviceTypes , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_ServiceGroupMetaDataWrapper->property_serviceTypes , env, i, axutil_strdup(env, arg_serviceTypes));
                  _ServiceGroupMetaDataWrapper->is_valid_serviceTypes = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to serviceTypes.
             */
            axis2_status_t AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_add_serviceTypes(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env,
                    const axis2_char_t* arg_serviceTypes)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);

                
                    if(NULL == arg_serviceTypes)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_ServiceGroupMetaDataWrapper->property_serviceTypes == NULL)
                {
                    _ServiceGroupMetaDataWrapper->property_serviceTypes = axutil_array_list_create(env, 10);
                }
                if(_ServiceGroupMetaDataWrapper->property_serviceTypes == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for serviceTypes");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_ServiceGroupMetaDataWrapper->property_serviceTypes , env, axutil_strdup(env, arg_serviceTypes));
                  _ServiceGroupMetaDataWrapper->is_valid_serviceTypes = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the serviceTypes array.
             */
            int AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_sizeof_serviceTypes(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, -1);
                if(_ServiceGroupMetaDataWrapper->property_serviceTypes == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_ServiceGroupMetaDataWrapper->property_serviceTypes, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_ServiceGroupMetaDataWrapper_remove_serviceTypes_at(
                    adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                    const axutil_env_t *env, int i)
            {
                return adb_ServiceGroupMetaDataWrapper_set_serviceTypes_nil_at(_ServiceGroupMetaDataWrapper, env, i);
            }

            

           /**
            * resetter for serviceTypes
            */
           axis2_status_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_reset_serviceTypes(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);
               

               
                  if (_ServiceGroupMetaDataWrapper->property_serviceTypes != NULL)
                  {
                      count = axutil_array_list_size(_ServiceGroupMetaDataWrapper->property_serviceTypes, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_serviceTypes, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, (axis2_char_t*)element);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_ServiceGroupMetaDataWrapper->property_serviceTypes, env);
                  }
                _ServiceGroupMetaDataWrapper->is_valid_serviceTypes = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether serviceTypes is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_is_serviceTypes_nil(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_TRUE);
               
               return !_ServiceGroupMetaDataWrapper->is_valid_serviceTypes;
           }

           /**
            * Set serviceTypes to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_set_serviceTypes_nil(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env)
           {
               return adb_ServiceGroupMetaDataWrapper_reset_serviceTypes(_ServiceGroupMetaDataWrapper, env);
           }

           
           /**
            * Check whether serviceTypes is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_is_serviceTypes_nil_at(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_TRUE);
               
               return (_ServiceGroupMetaDataWrapper->is_valid_serviceTypes == AXIS2_FALSE ||
                        NULL == _ServiceGroupMetaDataWrapper->property_serviceTypes || 
                        NULL == axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_serviceTypes, env, i));
           }

           /**
            * Set serviceTypes to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_ServiceGroupMetaDataWrapper_set_serviceTypes_nil_at(
                   adb_ServiceGroupMetaDataWrapper_t* _ServiceGroupMetaDataWrapper,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ServiceGroupMetaDataWrapper, AXIS2_FAILURE);

                if(_ServiceGroupMetaDataWrapper->property_serviceTypes == NULL ||
                            _ServiceGroupMetaDataWrapper->is_valid_serviceTypes == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_ServiceGroupMetaDataWrapper->property_serviceTypes, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_serviceTypes, env, i))
                        {
                            k ++;
                            non_nil_exists = AXIS2_TRUE;
                            if( k >= 0)
                            {
                                break;
                            }
                        }
                    }
                }
                

                if( k < 0)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of serviceTypes is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_ServiceGroupMetaDataWrapper->property_serviceTypes == NULL)
                {
                    _ServiceGroupMetaDataWrapper->is_valid_serviceTypes = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_ServiceGroupMetaDataWrapper->property_serviceTypes, env, i);
                if(NULL != element)
                {
                  
                  
                  
                       /* This is an unknown type or a primitive. Please free this manually*/
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _ServiceGroupMetaDataWrapper->is_valid_serviceTypes = AXIS2_FALSE;
                        axutil_array_list_set(_ServiceGroupMetaDataWrapper->property_serviceTypes , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_ServiceGroupMetaDataWrapper->property_serviceTypes , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

