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

#include <aws/cloudfront/model/FieldLevelEncryption.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

FieldLevelEncryption::FieldLevelEncryption() : 
    m_idHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_fieldLevelEncryptionConfigHasBeenSet(false)
{
}

FieldLevelEncryption::FieldLevelEncryption(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_fieldLevelEncryptionConfigHasBeenSet(false)
{
  *this = xmlNode;
}

FieldLevelEncryption& FieldLevelEncryption::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = idNode.GetText();
      m_idHasBeenSet = true;
    }
    XmlNode lastModifiedTimeNode = resultNode.FirstChild("LastModifiedTime");
    if(!lastModifiedTimeNode.IsNull())
    {
      m_lastModifiedTime = DateTime(StringUtils::Trim(lastModifiedTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_lastModifiedTimeHasBeenSet = true;
    }
    XmlNode fieldLevelEncryptionConfigNode = resultNode.FirstChild("FieldLevelEncryptionConfig");
    if(!fieldLevelEncryptionConfigNode.IsNull())
    {
      m_fieldLevelEncryptionConfig = fieldLevelEncryptionConfigNode;
      m_fieldLevelEncryptionConfigHasBeenSet = true;
    }
  }

  return *this;
}

void FieldLevelEncryption::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   XmlNode lastModifiedTimeNode = parentNode.CreateChildElement("LastModifiedTime");
   lastModifiedTimeNode.SetText(m_lastModifiedTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_fieldLevelEncryptionConfigHasBeenSet)
  {
   XmlNode fieldLevelEncryptionConfigNode = parentNode.CreateChildElement("FieldLevelEncryptionConfig");
   m_fieldLevelEncryptionConfig.AddToNode(fieldLevelEncryptionConfigNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
