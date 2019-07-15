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

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::TranscribeStreamingService;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace TranscribeStreamingServiceErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranscribeStreamingServiceErrors::CONFLICT), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranscribeStreamingServiceErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(TranscribeStreamingServiceErrors::BAD_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace TranscribeStreamingServiceErrorMapper
} // namespace TranscribeStreamingService
} // namespace Aws
