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


#include <skv/common/skv_client_configuration.hpp>



// Constructor
skv_client_configuration_t::skv_client_configuration_t(){}

// Destructor
skv_client_configuration_t::~skv_client_configuration_t() 
{ 
	delete mConfiguration;
} 




skv_client_configuration_t*
skv_client_configuration_t::GetSKVConfiguration( const char *aConfigFile )
{
  
    mConfiguration = new skv_client_configuration_t;
    if( mConfiguration->ReadConfigurationFile( aConfigFile ) )
    {
      delete mConfiguration;
      mConfiguration = NULL;
    }

  return mConfiguration;
}
