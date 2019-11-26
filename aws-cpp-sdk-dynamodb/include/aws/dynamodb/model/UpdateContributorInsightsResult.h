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

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ContributorInsightsStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{
  class AWS_DYNAMODB_API UpdateContributorInsightsResult
  {
  public:
    UpdateContributorInsightsResult();
    UpdateContributorInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateContributorInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableName = value; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableName = std::move(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const char* value) { m_tableName.assign(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline UpdateContributorInsightsResult& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline UpdateContributorInsightsResult& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline UpdateContributorInsightsResult& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The name of the global secondary index, if applicable.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the global secondary index, if applicable.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexName = value; }

    /**
     * <p>The name of the global secondary index, if applicable.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexName = std::move(value); }

    /**
     * <p>The name of the global secondary index, if applicable.</p>
     */
    inline void SetIndexName(const char* value) { m_indexName.assign(value); }

    /**
     * <p>The name of the global secondary index, if applicable.</p>
     */
    inline UpdateContributorInsightsResult& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the global secondary index, if applicable.</p>
     */
    inline UpdateContributorInsightsResult& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the global secondary index, if applicable.</p>
     */
    inline UpdateContributorInsightsResult& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The status of contributor insights</p>
     */
    inline const ContributorInsightsStatus& GetContributorInsightsStatus() const{ return m_contributorInsightsStatus; }

    /**
     * <p>The status of contributor insights</p>
     */
    inline void SetContributorInsightsStatus(const ContributorInsightsStatus& value) { m_contributorInsightsStatus = value; }

    /**
     * <p>The status of contributor insights</p>
     */
    inline void SetContributorInsightsStatus(ContributorInsightsStatus&& value) { m_contributorInsightsStatus = std::move(value); }

    /**
     * <p>The status of contributor insights</p>
     */
    inline UpdateContributorInsightsResult& WithContributorInsightsStatus(const ContributorInsightsStatus& value) { SetContributorInsightsStatus(value); return *this;}

    /**
     * <p>The status of contributor insights</p>
     */
    inline UpdateContributorInsightsResult& WithContributorInsightsStatus(ContributorInsightsStatus&& value) { SetContributorInsightsStatus(std::move(value)); return *this;}

  private:

    Aws::String m_tableName;

    Aws::String m_indexName;

    ContributorInsightsStatus m_contributorInsightsStatus;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
