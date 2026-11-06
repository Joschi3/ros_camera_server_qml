// Copyright (c) 2025 Stefan Fabian. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef ROS_CAMERA_SERVER_QML_COMMON_STREAM_STATISTICS_H
#define ROS_CAMERA_SERVER_QML_COMMON_STREAM_STATISTICS_H

#include <QSize>

#include <cstdint>

namespace ros_camera_server_qml_common
{

struct StreamStatistics {
  int latency = -1;
  int network_latency = -1;
  int processing_latency = -1;
  QSize resolution;
  qreal framerate = 0.0;
  //! Capture time of the frame in nanoseconds (ROS time), 0 if unknown.
  int64_t capture_time = 0;
};

} // namespace ros_camera_server_qml_common

#endif // ROS_CAMERA_SERVER_QML_COMMON_STREAM_STATISTICS_H
