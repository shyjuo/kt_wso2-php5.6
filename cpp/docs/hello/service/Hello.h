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


#ifndef  HELLO_H
#define HELLO_H

#include <ServiceSkeleton.h>

using namespace wso2wsf;

class Hello: public ServiceSkeleton 
{
public:
	WSF_EXTERN WSF_CALL Hello(){};

	OMElement* WSF_CALL invoke(OMElement *message, MessageContext *msgCtx);
	
	OMElement* WSF_CALL onFault(OMElement *message);
	
	void WSF_CALL init();

	OMElement* greet(OMElement *inMsg);

};


#endif // HELLO_H