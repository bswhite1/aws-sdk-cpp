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

#include <aws/eventbridge/model/SqsParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

SqsParameters::SqsParameters() : 
    m_messageGroupIdHasBeenSet(false)
{
}

SqsParameters::SqsParameters(JsonView jsonValue) : 
    m_messageGroupIdHasBeenSet(false)
{
  *this = jsonValue;
}

SqsParameters& SqsParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MessageGroupId"))
  {
    m_messageGroupId = jsonValue.GetString("MessageGroupId");

    m_messageGroupIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SqsParameters::Jsonize() const
{
  JsonValue payload;

  if(m_messageGroupIdHasBeenSet)
  {
   payload.WithString("MessageGroupId", m_messageGroupId);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
