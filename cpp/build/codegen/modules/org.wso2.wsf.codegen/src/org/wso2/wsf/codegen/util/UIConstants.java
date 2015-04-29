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

package org.wso2.wsf.codegen.util;

public interface UIConstants {
    public static final String JAVA = "java" ;
    public static final String C = "c" ;
    public static final String CPP = "cpp" ;
    
    public static final String DATA_BINDING_NONE = "none" ;
    public static final String DATA_BINDING_ADB = "adb" ;
    public static final String DATA_BINDING_XMLBEANS = "xmlbeans" ;
    public static final String DATA_BINDING_JIBX = "jibx" ;
    
	// Selected Option by the user at the previous page (default/false Custom/true)
	public static boolean selectedOption = false;
	
	//codegen options
	public static final String DEFAULT = "default" ;
	public static final String CUSTOM = "custom" ;
	
	//Default package name 
	public static final String DEFAULT_PACKAGENAME = "org.example.webservice" ;
	
	//Folder names
	public static final String LIB = "lib" ;
	public static final String TARGET = "target" ;
	//public static final String PLUGINS = "plugins" ;
	
	
}
