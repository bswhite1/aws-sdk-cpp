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
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/Frequency.h>
#include <aws/groundstation/model/Polarization.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Information about the uplink spectral <code>Config</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UplinkSpectrumConfig">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API UplinkSpectrumConfig
  {
  public:
    UplinkSpectrumConfig();
    UplinkSpectrumConfig(Aws::Utils::Json::JsonView jsonValue);
    UplinkSpectrumConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Center frequency of an uplink spectral <code>Config</code>.</p>
     */
    inline const Frequency& GetCenterFrequency() const{ return m_centerFrequency; }

    /**
     * <p>Center frequency of an uplink spectral <code>Config</code>.</p>
     */
    inline bool CenterFrequencyHasBeenSet() const { return m_centerFrequencyHasBeenSet; }

    /**
     * <p>Center frequency of an uplink spectral <code>Config</code>.</p>
     */
    inline void SetCenterFrequency(const Frequency& value) { m_centerFrequencyHasBeenSet = true; m_centerFrequency = value; }

    /**
     * <p>Center frequency of an uplink spectral <code>Config</code>.</p>
     */
    inline void SetCenterFrequency(Frequency&& value) { m_centerFrequencyHasBeenSet = true; m_centerFrequency = std::move(value); }

    /**
     * <p>Center frequency of an uplink spectral <code>Config</code>.</p>
     */
    inline UplinkSpectrumConfig& WithCenterFrequency(const Frequency& value) { SetCenterFrequency(value); return *this;}

    /**
     * <p>Center frequency of an uplink spectral <code>Config</code>.</p>
     */
    inline UplinkSpectrumConfig& WithCenterFrequency(Frequency&& value) { SetCenterFrequency(std::move(value)); return *this;}


    /**
     * <p>Polarization of an uplink spectral <code>Config</code>.</p>
     */
    inline const Polarization& GetPolarization() const{ return m_polarization; }

    /**
     * <p>Polarization of an uplink spectral <code>Config</code>.</p>
     */
    inline bool PolarizationHasBeenSet() const { return m_polarizationHasBeenSet; }

    /**
     * <p>Polarization of an uplink spectral <code>Config</code>.</p>
     */
    inline void SetPolarization(const Polarization& value) { m_polarizationHasBeenSet = true; m_polarization = value; }

    /**
     * <p>Polarization of an uplink spectral <code>Config</code>.</p>
     */
    inline void SetPolarization(Polarization&& value) { m_polarizationHasBeenSet = true; m_polarization = std::move(value); }

    /**
     * <p>Polarization of an uplink spectral <code>Config</code>.</p>
     */
    inline UplinkSpectrumConfig& WithPolarization(const Polarization& value) { SetPolarization(value); return *this;}

    /**
     * <p>Polarization of an uplink spectral <code>Config</code>.</p>
     */
    inline UplinkSpectrumConfig& WithPolarization(Polarization&& value) { SetPolarization(std::move(value)); return *this;}

  private:

    Frequency m_centerFrequency;
    bool m_centerFrequencyHasBeenSet;

    Polarization m_polarization;
    bool m_polarizationHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
