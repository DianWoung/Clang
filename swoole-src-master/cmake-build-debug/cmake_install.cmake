# Install script for directory: E:/dianwang/Cprojects/swoole-src-master

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/swoole_server")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  MESSAGE("Are you run command using root user?")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/dianwang/Cprojects/swoole-src-master/lib/libswoole.dll.a")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/dianwang/Cprojects/swoole-src-master/lib/libswoole.a")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/swoole" TYPE FILE FILES
    "E:/dianwang/Cprojects/swoole-src-master/include/Client.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/Connection.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/RingQueue.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/Server.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/array.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/async.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/atomic.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/base64.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/buffer.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/coroutine.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/error.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/hash.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/hashmap.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/heap.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/helper/kqueue.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/http.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/http2.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/list.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/mqtt.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/rbtree.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/redis.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/sha1.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/socks5.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/swoole.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/table.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/tests.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/uthash.h"
    "E:/dianwang/Cprojects/swoole-src-master/include/websocket.h"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/swoole" TYPE FILE FILES "E:/dianwang/Cprojects/swoole-src-master/swoole_config.h")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/swoole" TYPE FILE FILES "E:/dianwang/Cprojects/swoole-src-master/config.h")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "E:/dianwang/Cprojects/swoole-src-master/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
