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

#include <aws/kinesis-video-archived-media/model/HLSPlaybackMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideoArchivedMedia
  {
    namespace Model
    {
      namespace HLSPlaybackModeMapper
      {

        static const int LIVE_HASH = HashingUtils::HashString("LIVE");
        static const int LIVE_REPLAY_HASH = HashingUtils::HashString("LIVE_REPLAY");
        static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");


        HLSPlaybackMode GetHLSPlaybackModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIVE_HASH)
          {
            return HLSPlaybackMode::LIVE;
          }
          else if (hashCode == LIVE_REPLAY_HASH)
          {
            return HLSPlaybackMode::LIVE_REPLAY;
          }
          else if (hashCode == ON_DEMAND_HASH)
          {
            return HLSPlaybackMode::ON_DEMAND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HLSPlaybackMode>(hashCode);
          }

          return HLSPlaybackMode::NOT_SET;
        }

        Aws::String GetNameForHLSPlaybackMode(HLSPlaybackMode enumValue)
        {
          switch(enumValue)
          {
          case HLSPlaybackMode::LIVE:
            return "LIVE";
          case HLSPlaybackMode::LIVE_REPLAY:
            return "LIVE_REPLAY";
          case HLSPlaybackMode::ON_DEMAND:
            return "ON_DEMAND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HLSPlaybackModeMapper
    } // namespace Model
  } // namespace KinesisVideoArchivedMedia
} // namespace Aws
