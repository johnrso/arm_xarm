execute_process(COMMAND "/home/stepjam/catkin_ws/build/tf_conversions/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/stepjam/catkin_ws/build/tf_conversions/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
