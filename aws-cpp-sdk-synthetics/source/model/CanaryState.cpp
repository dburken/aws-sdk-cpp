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

#include <aws/synthetics/model/CanaryState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Synthetics
  {
    namespace Model
    {
      namespace CanaryStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        CanaryState GetCanaryStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return CanaryState::CREATING;
          }
          else if (hashCode == READY_HASH)
          {
            return CanaryState::READY;
          }
          else if (hashCode == STARTING_HASH)
          {
            return CanaryState::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return CanaryState::RUNNING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return CanaryState::UPDATING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return CanaryState::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return CanaryState::STOPPED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return CanaryState::ERROR_;
          }
          else if (hashCode == DELETING_HASH)
          {
            return CanaryState::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CanaryState>(hashCode);
          }

          return CanaryState::NOT_SET;
        }

        Aws::String GetNameForCanaryState(CanaryState enumValue)
        {
          switch(enumValue)
          {
          case CanaryState::CREATING:
            return "CREATING";
          case CanaryState::READY:
            return "READY";
          case CanaryState::STARTING:
            return "STARTING";
          case CanaryState::RUNNING:
            return "RUNNING";
          case CanaryState::UPDATING:
            return "UPDATING";
          case CanaryState::STOPPING:
            return "STOPPING";
          case CanaryState::STOPPED:
            return "STOPPED";
          case CanaryState::ERROR_:
            return "ERROR";
          case CanaryState::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CanaryStateMapper
    } // namespace Model
  } // namespace Synthetics
} // namespace Aws
