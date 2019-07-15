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
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/MediaPackageVodRequest.h>
#include <aws/mediapackage-vod/model/CmafPackage.h>
#include <aws/mediapackage-vod/model/DashPackage.h>
#include <aws/mediapackage-vod/model/HlsPackage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage-vod/model/MssPackage.h>
#include <utility>

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

  /**
   * A new MediaPackage VOD PackagingConfiguration resource configuration.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreatePackagingConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGEVOD_API CreatePackagingConfigurationRequest : public MediaPackageVodRequest
  {
  public:
    CreatePackagingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePackagingConfiguration"; }

    Aws::String SerializePayload() const override;


    
    inline const CmafPackage& GetCmafPackage() const{ return m_cmafPackage; }

    
    inline bool CmafPackageHasBeenSet() const { return m_cmafPackageHasBeenSet; }

    
    inline void SetCmafPackage(const CmafPackage& value) { m_cmafPackageHasBeenSet = true; m_cmafPackage = value; }

    
    inline void SetCmafPackage(CmafPackage&& value) { m_cmafPackageHasBeenSet = true; m_cmafPackage = std::move(value); }

    
    inline CreatePackagingConfigurationRequest& WithCmafPackage(const CmafPackage& value) { SetCmafPackage(value); return *this;}

    
    inline CreatePackagingConfigurationRequest& WithCmafPackage(CmafPackage&& value) { SetCmafPackage(std::move(value)); return *this;}


    
    inline const DashPackage& GetDashPackage() const{ return m_dashPackage; }

    
    inline bool DashPackageHasBeenSet() const { return m_dashPackageHasBeenSet; }

    
    inline void SetDashPackage(const DashPackage& value) { m_dashPackageHasBeenSet = true; m_dashPackage = value; }

    
    inline void SetDashPackage(DashPackage&& value) { m_dashPackageHasBeenSet = true; m_dashPackage = std::move(value); }

    
    inline CreatePackagingConfigurationRequest& WithDashPackage(const DashPackage& value) { SetDashPackage(value); return *this;}

    
    inline CreatePackagingConfigurationRequest& WithDashPackage(DashPackage&& value) { SetDashPackage(std::move(value)); return *this;}


    
    inline const HlsPackage& GetHlsPackage() const{ return m_hlsPackage; }

    
    inline bool HlsPackageHasBeenSet() const { return m_hlsPackageHasBeenSet; }

    
    inline void SetHlsPackage(const HlsPackage& value) { m_hlsPackageHasBeenSet = true; m_hlsPackage = value; }

    
    inline void SetHlsPackage(HlsPackage&& value) { m_hlsPackageHasBeenSet = true; m_hlsPackage = std::move(value); }

    
    inline CreatePackagingConfigurationRequest& WithHlsPackage(const HlsPackage& value) { SetHlsPackage(value); return *this;}

    
    inline CreatePackagingConfigurationRequest& WithHlsPackage(HlsPackage&& value) { SetHlsPackage(std::move(value)); return *this;}


    /**
     * The ID of the PackagingConfiguration.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the PackagingConfiguration.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of the PackagingConfiguration.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of the PackagingConfiguration.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of the PackagingConfiguration.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of the PackagingConfiguration.
     */
    inline CreatePackagingConfigurationRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the PackagingConfiguration.
     */
    inline CreatePackagingConfigurationRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the PackagingConfiguration.
     */
    inline CreatePackagingConfigurationRequest& WithId(const char* value) { SetId(value); return *this;}


    
    inline const MssPackage& GetMssPackage() const{ return m_mssPackage; }

    
    inline bool MssPackageHasBeenSet() const { return m_mssPackageHasBeenSet; }

    
    inline void SetMssPackage(const MssPackage& value) { m_mssPackageHasBeenSet = true; m_mssPackage = value; }

    
    inline void SetMssPackage(MssPackage&& value) { m_mssPackageHasBeenSet = true; m_mssPackage = std::move(value); }

    
    inline CreatePackagingConfigurationRequest& WithMssPackage(const MssPackage& value) { SetMssPackage(value); return *this;}

    
    inline CreatePackagingConfigurationRequest& WithMssPackage(MssPackage&& value) { SetMssPackage(std::move(value)); return *this;}


    /**
     * The ID of a PackagingGroup.
     */
    inline const Aws::String& GetPackagingGroupId() const{ return m_packagingGroupId; }

    /**
     * The ID of a PackagingGroup.
     */
    inline bool PackagingGroupIdHasBeenSet() const { return m_packagingGroupIdHasBeenSet; }

    /**
     * The ID of a PackagingGroup.
     */
    inline void SetPackagingGroupId(const Aws::String& value) { m_packagingGroupIdHasBeenSet = true; m_packagingGroupId = value; }

    /**
     * The ID of a PackagingGroup.
     */
    inline void SetPackagingGroupId(Aws::String&& value) { m_packagingGroupIdHasBeenSet = true; m_packagingGroupId = std::move(value); }

    /**
     * The ID of a PackagingGroup.
     */
    inline void SetPackagingGroupId(const char* value) { m_packagingGroupIdHasBeenSet = true; m_packagingGroupId.assign(value); }

    /**
     * The ID of a PackagingGroup.
     */
    inline CreatePackagingConfigurationRequest& WithPackagingGroupId(const Aws::String& value) { SetPackagingGroupId(value); return *this;}

    /**
     * The ID of a PackagingGroup.
     */
    inline CreatePackagingConfigurationRequest& WithPackagingGroupId(Aws::String&& value) { SetPackagingGroupId(std::move(value)); return *this;}

    /**
     * The ID of a PackagingGroup.
     */
    inline CreatePackagingConfigurationRequest& WithPackagingGroupId(const char* value) { SetPackagingGroupId(value); return *this;}

  private:

    CmafPackage m_cmafPackage;
    bool m_cmafPackageHasBeenSet;

    DashPackage m_dashPackage;
    bool m_dashPackageHasBeenSet;

    HlsPackage m_hlsPackage;
    bool m_hlsPackageHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    MssPackage m_mssPackage;
    bool m_mssPackageHasBeenSet;

    Aws::String m_packagingGroupId;
    bool m_packagingGroupIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
