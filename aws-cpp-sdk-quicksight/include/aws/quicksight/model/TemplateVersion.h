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
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourceStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TemplateError.h>
#include <aws/quicksight/model/DataSetConfiguration.h>
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
   * <p>A version of a template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TemplateVersion">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API TemplateVersion
  {
  public:
    TemplateVersion();
    TemplateVersion(Aws::Utils::Json::JsonView jsonValue);
    TemplateVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline TemplateVersion& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time this was created.</p>
     */
    inline TemplateVersion& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>Errors associated with the template.</p>
     */
    inline const Aws::Vector<TemplateError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Errors associated with the template.</p>
     */
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }

    /**
     * <p>Errors associated with the template.</p>
     */
    inline void SetErrors(const Aws::Vector<TemplateError>& value) { m_errorsHasBeenSet = true; m_errors = value; }

    /**
     * <p>Errors associated with the template.</p>
     */
    inline void SetErrors(Aws::Vector<TemplateError>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }

    /**
     * <p>Errors associated with the template.</p>
     */
    inline TemplateVersion& WithErrors(const Aws::Vector<TemplateError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Errors associated with the template.</p>
     */
    inline TemplateVersion& WithErrors(Aws::Vector<TemplateError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Errors associated with the template.</p>
     */
    inline TemplateVersion& AddErrors(const TemplateError& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }

    /**
     * <p>Errors associated with the template.</p>
     */
    inline TemplateVersion& AddErrors(TemplateError&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>The version number of the template.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The version number of the template.</p>
     */
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }

    /**
     * <p>The version number of the template.</p>
     */
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }

    /**
     * <p>The version number of the template.</p>
     */
    inline TemplateVersion& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}


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
    inline TemplateVersion& WithStatus(const ResourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline TemplateVersion& WithStatus(ResourceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Schema of the dataset identified by the placeholder. The idea is that any
     * dashboard created from the template should be bound to new datasets matching the
     * same schema described through this API. .</p>
     */
    inline const Aws::Vector<DataSetConfiguration>& GetDataSetConfigurations() const{ return m_dataSetConfigurations; }

    /**
     * <p>Schema of the dataset identified by the placeholder. The idea is that any
     * dashboard created from the template should be bound to new datasets matching the
     * same schema described through this API. .</p>
     */
    inline bool DataSetConfigurationsHasBeenSet() const { return m_dataSetConfigurationsHasBeenSet; }

    /**
     * <p>Schema of the dataset identified by the placeholder. The idea is that any
     * dashboard created from the template should be bound to new datasets matching the
     * same schema described through this API. .</p>
     */
    inline void SetDataSetConfigurations(const Aws::Vector<DataSetConfiguration>& value) { m_dataSetConfigurationsHasBeenSet = true; m_dataSetConfigurations = value; }

    /**
     * <p>Schema of the dataset identified by the placeholder. The idea is that any
     * dashboard created from the template should be bound to new datasets matching the
     * same schema described through this API. .</p>
     */
    inline void SetDataSetConfigurations(Aws::Vector<DataSetConfiguration>&& value) { m_dataSetConfigurationsHasBeenSet = true; m_dataSetConfigurations = std::move(value); }

    /**
     * <p>Schema of the dataset identified by the placeholder. The idea is that any
     * dashboard created from the template should be bound to new datasets matching the
     * same schema described through this API. .</p>
     */
    inline TemplateVersion& WithDataSetConfigurations(const Aws::Vector<DataSetConfiguration>& value) { SetDataSetConfigurations(value); return *this;}

    /**
     * <p>Schema of the dataset identified by the placeholder. The idea is that any
     * dashboard created from the template should be bound to new datasets matching the
     * same schema described through this API. .</p>
     */
    inline TemplateVersion& WithDataSetConfigurations(Aws::Vector<DataSetConfiguration>&& value) { SetDataSetConfigurations(std::move(value)); return *this;}

    /**
     * <p>Schema of the dataset identified by the placeholder. The idea is that any
     * dashboard created from the template should be bound to new datasets matching the
     * same schema described through this API. .</p>
     */
    inline TemplateVersion& AddDataSetConfigurations(const DataSetConfiguration& value) { m_dataSetConfigurationsHasBeenSet = true; m_dataSetConfigurations.push_back(value); return *this; }

    /**
     * <p>Schema of the dataset identified by the placeholder. The idea is that any
     * dashboard created from the template should be bound to new datasets matching the
     * same schema described through this API. .</p>
     */
    inline TemplateVersion& AddDataSetConfigurations(DataSetConfiguration&& value) { m_dataSetConfigurationsHasBeenSet = true; m_dataSetConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The description of the template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the template.</p>
     */
    inline TemplateVersion& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the template.</p>
     */
    inline TemplateVersion& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the template.</p>
     */
    inline TemplateVersion& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the analysis or template which was used to
     * create this template.</p>
     */
    inline const Aws::String& GetSourceEntityArn() const{ return m_sourceEntityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis or template which was used to
     * create this template.</p>
     */
    inline bool SourceEntityArnHasBeenSet() const { return m_sourceEntityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis or template which was used to
     * create this template.</p>
     */
    inline void SetSourceEntityArn(const Aws::String& value) { m_sourceEntityArnHasBeenSet = true; m_sourceEntityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis or template which was used to
     * create this template.</p>
     */
    inline void SetSourceEntityArn(Aws::String&& value) { m_sourceEntityArnHasBeenSet = true; m_sourceEntityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis or template which was used to
     * create this template.</p>
     */
    inline void SetSourceEntityArn(const char* value) { m_sourceEntityArnHasBeenSet = true; m_sourceEntityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis or template which was used to
     * create this template.</p>
     */
    inline TemplateVersion& WithSourceEntityArn(const Aws::String& value) { SetSourceEntityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis or template which was used to
     * create this template.</p>
     */
    inline TemplateVersion& WithSourceEntityArn(Aws::String&& value) { SetSourceEntityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis or template which was used to
     * create this template.</p>
     */
    inline TemplateVersion& WithSourceEntityArn(const char* value) { SetSourceEntityArn(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::Vector<TemplateError> m_errors;
    bool m_errorsHasBeenSet;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet;

    ResourceStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<DataSetConfiguration> m_dataSetConfigurations;
    bool m_dataSetConfigurationsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_sourceEntityArn;
    bool m_sourceEntityArnHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
