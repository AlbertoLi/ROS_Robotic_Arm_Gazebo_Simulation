# Install script for directory: /home/orsteam/alberto/catkin_ws/src/moveit_tutorials

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/orsteam/alberto/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/orsteam/alberto/catkin_ws/build/moveit_tutorials/catkin_generated/installspace/moveit_tutorials.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_tutorials/cmake" TYPE FILE FILES
    "/home/orsteam/alberto/catkin_ws/build/moveit_tutorials/catkin_generated/installspace/moveit_tutorialsConfig.cmake"
    "/home/orsteam/alberto/catkin_ws/build/moveit_tutorials/catkin_generated/installspace/moveit_tutorialsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_tutorials" TYPE FILE FILES "/home/orsteam/alberto/catkin_ws/src/moveit_tutorials/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/orsteam/alberto/catkin_ws/build/moveit_tutorials/doc/pr2_tutorials/kinematics/cmake_install.cmake")
  include("/home/orsteam/alberto/catkin_ws/build/moveit_tutorials/doc/pr2_tutorials/planning/cmake_install.cmake")
  include("/home/orsteam/alberto/catkin_ws/build/moveit_tutorials/doc/pr2_tutorials/state_display/cmake_install.cmake")
  include("/home/orsteam/alberto/catkin_ws/build/moveit_tutorials/doc/pr2_tutorials/interactivity/cmake_install.cmake")
  include("/home/orsteam/alberto/catkin_ws/build/moveit_tutorials/doc/pr2_tutorials/pick_place/cmake_install.cmake")

endif()

