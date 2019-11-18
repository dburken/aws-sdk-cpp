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

#include <aws/sagemaker/model/ContainerMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ContainerModeMapper
      {

        static const int SingleModel_HASH = HashingUtils::HashString("SingleModel");
        static const int MultiModel_HASH = HashingUtils::HashString("MultiModel");


        ContainerMode GetContainerModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SingleModel_HASH)
          {
            return ContainerMode::SingleModel;
          }
          else if (hashCode == MultiModel_HASH)
          {
            return ContainerMode::MultiModel;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerMode>(hashCode);
          }

          return ContainerMode::NOT_SET;
        }

        Aws::String GetNameForContainerMode(ContainerMode enumValue)
        {
          switch(enumValue)
          {
          case ContainerMode::SingleModel:
            return "SingleModel";
          case ContainerMode::MultiModel:
            return "MultiModel";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerModeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
