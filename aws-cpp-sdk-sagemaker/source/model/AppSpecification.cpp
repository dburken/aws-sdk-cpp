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

#include <aws/sagemaker/model/AppSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AppSpecification::AppSpecification() : 
    m_imageUriHasBeenSet(false),
    m_containerEntrypointHasBeenSet(false),
    m_containerArgumentsHasBeenSet(false)
{
}

AppSpecification::AppSpecification(JsonView jsonValue) : 
    m_imageUriHasBeenSet(false),
    m_containerEntrypointHasBeenSet(false),
    m_containerArgumentsHasBeenSet(false)
{
  *this = jsonValue;
}

AppSpecification& AppSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImageUri"))
  {
    m_imageUri = jsonValue.GetString("ImageUri");

    m_imageUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerEntrypoint"))
  {
    Array<JsonView> containerEntrypointJsonList = jsonValue.GetArray("ContainerEntrypoint");
    for(unsigned containerEntrypointIndex = 0; containerEntrypointIndex < containerEntrypointJsonList.GetLength(); ++containerEntrypointIndex)
    {
      m_containerEntrypoint.push_back(containerEntrypointJsonList[containerEntrypointIndex].AsString());
    }
    m_containerEntrypointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerArguments"))
  {
    Array<JsonView> containerArgumentsJsonList = jsonValue.GetArray("ContainerArguments");
    for(unsigned containerArgumentsIndex = 0; containerArgumentsIndex < containerArgumentsJsonList.GetLength(); ++containerArgumentsIndex)
    {
      m_containerArguments.push_back(containerArgumentsJsonList[containerArgumentsIndex].AsString());
    }
    m_containerArgumentsHasBeenSet = true;
  }

  return *this;
}

JsonValue AppSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_imageUriHasBeenSet)
  {
   payload.WithString("ImageUri", m_imageUri);

  }

  if(m_containerEntrypointHasBeenSet)
  {
   Array<JsonValue> containerEntrypointJsonList(m_containerEntrypoint.size());
   for(unsigned containerEntrypointIndex = 0; containerEntrypointIndex < containerEntrypointJsonList.GetLength(); ++containerEntrypointIndex)
   {
     containerEntrypointJsonList[containerEntrypointIndex].AsString(m_containerEntrypoint[containerEntrypointIndex]);
   }
   payload.WithArray("ContainerEntrypoint", std::move(containerEntrypointJsonList));

  }

  if(m_containerArgumentsHasBeenSet)
  {
   Array<JsonValue> containerArgumentsJsonList(m_containerArguments.size());
   for(unsigned containerArgumentsIndex = 0; containerArgumentsIndex < containerArgumentsJsonList.GetLength(); ++containerArgumentsIndex)
   {
     containerArgumentsJsonList[containerArgumentsIndex].AsString(m_containerArguments[containerArgumentsIndex]);
   }
   payload.WithArray("ContainerArguments", std::move(containerArgumentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
