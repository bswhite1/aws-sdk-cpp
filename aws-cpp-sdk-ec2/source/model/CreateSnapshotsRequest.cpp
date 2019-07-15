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

#include <aws/ec2/model/CreateSnapshotsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateSnapshotsRequest::CreateSnapshotsRequest() : 
    m_descriptionHasBeenSet(false),
    m_instanceSpecificationHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_copyTagsFromSource(CopyTagsFromSource::NOT_SET),
    m_copyTagsFromSourceHasBeenSet(false)
{
}

Aws::String CreateSnapshotsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateSnapshots&";
  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_instanceSpecificationHasBeenSet)
  {
    m_instanceSpecification.OutputToStream(ss, "InstanceSpecification");
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_copyTagsFromSourceHasBeenSet)
  {
    ss << "CopyTagsFromSource=" << CopyTagsFromSourceMapper::GetNameForCopyTagsFromSource(m_copyTagsFromSource) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateSnapshotsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
