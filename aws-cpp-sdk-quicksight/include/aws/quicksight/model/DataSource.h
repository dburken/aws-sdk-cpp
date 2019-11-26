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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSourceType.h>
#include <aws/quicksight/model/ResourceStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/DataSourceParameters.h>
#include <aws/quicksight/model/VpcConnectionProperties.h>
#include <aws/quicksight/model/SslProperties.h>
#include <aws/quicksight/model/DataSourceErrorInfo.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The structure of a data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSource">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API DataSource
  {
  public:
    DataSource();
    DataSource(Aws::Utils::Json::JsonView jsonValue);
    DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource name (ARN) of the data source.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource name (ARN) of the data source.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource name (ARN) of the data source.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource name (ARN) of the data source.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource name (ARN) of the data source.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource name (ARN) of the data source.</p>
     */
    inline DataSource& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource name (ARN) of the data source.</p>
     */
    inline DataSource& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource name (ARN) of the data source.</p>
     */
    inline DataSource& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the data source. This ID is unique per AWS Region for each AWS
     * account.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The ID of the data source. This ID is unique per AWS Region for each AWS
     * account.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The ID of the data source. This ID is unique per AWS Region for each AWS
     * account.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The ID of the data source. This ID is unique per AWS Region for each AWS
     * account.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The ID of the data source. This ID is unique per AWS Region for each AWS
     * account.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The ID of the data source. This ID is unique per AWS Region for each AWS
     * account.</p>
     */
    inline DataSource& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The ID of the data source. This ID is unique per AWS Region for each AWS
     * account.</p>
     */
    inline DataSource& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the data source. This ID is unique per AWS Region for each AWS
     * account.</p>
     */
    inline DataSource& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>A display name for the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A display name for the data source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A display name for the data source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A display name for the data source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A display name for the data source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A display name for the data source.</p>
     */
    inline DataSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A display name for the data source.</p>
     */
    inline DataSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A display name for the data source.</p>
     */
    inline DataSource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the data source. This indicates which database engine the data
     * source connects to.</p>
     */
    inline const DataSourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of the data source. This indicates which database engine the data
     * source connects to.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the data source. This indicates which database engine the data
     * source connects to.</p>
     */
    inline void SetType(const DataSourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the data source. This indicates which database engine the data
     * source connects to.</p>
     */
    inline void SetType(DataSourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the data source. This indicates which database engine the data
     * source connects to.</p>
     */
    inline DataSource& WithType(const DataSourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the data source. This indicates which database engine the data
     * source connects to.</p>
     */
    inline DataSource& WithType(DataSourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline const ResourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(const ResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(ResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DataSource& WithStatus(const ResourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DataSource& WithStatus(ResourceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time this was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time this was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time this was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time this was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time this was created.</p>
     */
    inline DataSource& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time this was created.</p>
     */
    inline DataSource& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The last time this was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The last time this was updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The last time this was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The last time this was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The last time this was updated.</p>
     */
    inline DataSource& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The last time this was updated.</p>
     */
    inline DataSource& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The parameters that QuickSight uses to connect to your underlying source.
     * This is a variant type structure. At most one of the attributes should be
     * non-null for this structure to be valid.</p>
     */
    inline const DataSourceParameters& GetDataSourceParameters() const{ return m_dataSourceParameters; }

    /**
     * <p>The parameters that QuickSight uses to connect to your underlying source.
     * This is a variant type structure. At most one of the attributes should be
     * non-null for this structure to be valid.</p>
     */
    inline bool DataSourceParametersHasBeenSet() const { return m_dataSourceParametersHasBeenSet; }

    /**
     * <p>The parameters that QuickSight uses to connect to your underlying source.
     * This is a variant type structure. At most one of the attributes should be
     * non-null for this structure to be valid.</p>
     */
    inline void SetDataSourceParameters(const DataSourceParameters& value) { m_dataSourceParametersHasBeenSet = true; m_dataSourceParameters = value; }

    /**
     * <p>The parameters that QuickSight uses to connect to your underlying source.
     * This is a variant type structure. At most one of the attributes should be
     * non-null for this structure to be valid.</p>
     */
    inline void SetDataSourceParameters(DataSourceParameters&& value) { m_dataSourceParametersHasBeenSet = true; m_dataSourceParameters = std::move(value); }

    /**
     * <p>The parameters that QuickSight uses to connect to your underlying source.
     * This is a variant type structure. At most one of the attributes should be
     * non-null for this structure to be valid.</p>
     */
    inline DataSource& WithDataSourceParameters(const DataSourceParameters& value) { SetDataSourceParameters(value); return *this;}

    /**
     * <p>The parameters that QuickSight uses to connect to your underlying source.
     * This is a variant type structure. At most one of the attributes should be
     * non-null for this structure to be valid.</p>
     */
    inline DataSource& WithDataSourceParameters(DataSourceParameters&& value) { SetDataSourceParameters(std::move(value)); return *this;}


    /**
     * <p>The VPC connection information. You need to use this parameter only when you
     * want QuickSight to use a VPC connection when connecting to your underlying
     * source.</p>
     */
    inline const VpcConnectionProperties& GetVpcConnectionProperties() const{ return m_vpcConnectionProperties; }

    /**
     * <p>The VPC connection information. You need to use this parameter only when you
     * want QuickSight to use a VPC connection when connecting to your underlying
     * source.</p>
     */
    inline bool VpcConnectionPropertiesHasBeenSet() const { return m_vpcConnectionPropertiesHasBeenSet; }

    /**
     * <p>The VPC connection information. You need to use this parameter only when you
     * want QuickSight to use a VPC connection when connecting to your underlying
     * source.</p>
     */
    inline void SetVpcConnectionProperties(const VpcConnectionProperties& value) { m_vpcConnectionPropertiesHasBeenSet = true; m_vpcConnectionProperties = value; }

    /**
     * <p>The VPC connection information. You need to use this parameter only when you
     * want QuickSight to use a VPC connection when connecting to your underlying
     * source.</p>
     */
    inline void SetVpcConnectionProperties(VpcConnectionProperties&& value) { m_vpcConnectionPropertiesHasBeenSet = true; m_vpcConnectionProperties = std::move(value); }

    /**
     * <p>The VPC connection information. You need to use this parameter only when you
     * want QuickSight to use a VPC connection when connecting to your underlying
     * source.</p>
     */
    inline DataSource& WithVpcConnectionProperties(const VpcConnectionProperties& value) { SetVpcConnectionProperties(value); return *this;}

    /**
     * <p>The VPC connection information. You need to use this parameter only when you
     * want QuickSight to use a VPC connection when connecting to your underlying
     * source.</p>
     */
    inline DataSource& WithVpcConnectionProperties(VpcConnectionProperties&& value) { SetVpcConnectionProperties(std::move(value)); return *this;}


    /**
     * <p>Secure Socket Layer (SSL) properties that apply when QuickSight connects to
     * your underlying source.</p>
     */
    inline const SslProperties& GetSslProperties() const{ return m_sslProperties; }

    /**
     * <p>Secure Socket Layer (SSL) properties that apply when QuickSight connects to
     * your underlying source.</p>
     */
    inline bool SslPropertiesHasBeenSet() const { return m_sslPropertiesHasBeenSet; }

    /**
     * <p>Secure Socket Layer (SSL) properties that apply when QuickSight connects to
     * your underlying source.</p>
     */
    inline void SetSslProperties(const SslProperties& value) { m_sslPropertiesHasBeenSet = true; m_sslProperties = value; }

    /**
     * <p>Secure Socket Layer (SSL) properties that apply when QuickSight connects to
     * your underlying source.</p>
     */
    inline void SetSslProperties(SslProperties&& value) { m_sslPropertiesHasBeenSet = true; m_sslProperties = std::move(value); }

    /**
     * <p>Secure Socket Layer (SSL) properties that apply when QuickSight connects to
     * your underlying source.</p>
     */
    inline DataSource& WithSslProperties(const SslProperties& value) { SetSslProperties(value); return *this;}

    /**
     * <p>Secure Socket Layer (SSL) properties that apply when QuickSight connects to
     * your underlying source.</p>
     */
    inline DataSource& WithSslProperties(SslProperties&& value) { SetSslProperties(std::move(value)); return *this;}


    /**
     * <p>Error information from the last update or the creation of the data
     * source.</p>
     */
    inline const DataSourceErrorInfo& GetErrorInfo() const{ return m_errorInfo; }

    /**
     * <p>Error information from the last update or the creation of the data
     * source.</p>
     */
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }

    /**
     * <p>Error information from the last update or the creation of the data
     * source.</p>
     */
    inline void SetErrorInfo(const DataSourceErrorInfo& value) { m_errorInfoHasBeenSet = true; m_errorInfo = value; }

    /**
     * <p>Error information from the last update or the creation of the data
     * source.</p>
     */
    inline void SetErrorInfo(DataSourceErrorInfo&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::move(value); }

    /**
     * <p>Error information from the last update or the creation of the data
     * source.</p>
     */
    inline DataSource& WithErrorInfo(const DataSourceErrorInfo& value) { SetErrorInfo(value); return *this;}

    /**
     * <p>Error information from the last update or the creation of the data
     * source.</p>
     */
    inline DataSource& WithErrorInfo(DataSourceErrorInfo&& value) { SetErrorInfo(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    DataSourceType m_type;
    bool m_typeHasBeenSet;

    ResourceStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet;

    DataSourceParameters m_dataSourceParameters;
    bool m_dataSourceParametersHasBeenSet;

    VpcConnectionProperties m_vpcConnectionProperties;
    bool m_vpcConnectionPropertiesHasBeenSet;

    SslProperties m_sslProperties;
    bool m_sslPropertiesHasBeenSet;

    DataSourceErrorInfo m_errorInfo;
    bool m_errorInfoHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
