﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/groundstation/model/GetMinuteUsageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMinuteUsageRequest::GetMinuteUsageRequest() : 
    m_month(0),
    m_monthHasBeenSet(false),
    m_year(0),
    m_yearHasBeenSet(false)
{
}

Aws::String GetMinuteUsageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_monthHasBeenSet)
  {
   payload.WithInteger("month", m_month);

  }

  if(m_yearHasBeenSet)
  {
   payload.WithInteger("year", m_year);

  }

  return payload.View().WriteReadable();
}




