/************************************************
 * Copyright (c) IBM Corp. 2014
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *************************************************/

/*
 * Contributors:
 *     lschneid, Nesrinekh - initial implementation
 */


#include <cstdlib>
#include <iostream>
#include <fstream>
#include <arpa/inet.h>

#include <FxLogger.hpp>

#ifndef SKV_CONFIG_FILE_LOG
#define SKV_CONFIG_FILE_LOG ( 0 )
#endif

#include <skv/common/skv_config.hpp>


class skv_client_configuration_t : public skv_configuration_t
{
	
	skv_client_configuration_t *mConfiguration;
	public:
	skv_client_configuration_t();
	skv_client_configuration_t* GetSKVConfiguration( const char *aConfigFile );
	~skv_client_configuration_t(); 
	
};










