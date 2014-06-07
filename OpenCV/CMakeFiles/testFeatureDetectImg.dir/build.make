# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/thomas/MonoNav/OpenCV

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thomas/MonoNav/OpenCV

# Include any dependencies generated for this target.
include CMakeFiles/testFeatureDetectImg.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testFeatureDetectImg.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testFeatureDetectImg.dir/flags.make

CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.o: CMakeFiles/testFeatureDetectImg.dir/flags.make
CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.o: testFeatureDetectImg.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/thomas/MonoNav/OpenCV/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.o -c /home/thomas/MonoNav/OpenCV/testFeatureDetectImg.cc

CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/thomas/MonoNav/OpenCV/testFeatureDetectImg.cc > CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.i

CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/thomas/MonoNav/OpenCV/testFeatureDetectImg.cc -o CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.s

CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.o.requires:
.PHONY : CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.o.requires

CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.o.provides: CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.o.requires
	$(MAKE) -f CMakeFiles/testFeatureDetectImg.dir/build.make CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.o.provides.build
.PHONY : CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.o.provides

CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.o.provides.build: CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.o

# Object files for target testFeatureDetectImg
testFeatureDetectImg_OBJECTS = \
"CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.o"

# External object files for target testFeatureDetectImg
testFeatureDetectImg_EXTERNAL_OBJECTS =

testFeatureDetectImg: CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.o
testFeatureDetectImg: /usr/local/lib/libopencv_videostab.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_video.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_ts.a
testFeatureDetectImg: /usr/local/lib/libopencv_superres.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_stitching.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_photo.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_ocl.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_objdetect.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_nonfree.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_ml.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_legacy.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_imgproc.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_highgui.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_gpu.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_flann.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_features2d.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_core.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_contrib.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_calib3d.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_nonfree.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_ocl.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_gpu.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_photo.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_objdetect.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_legacy.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_video.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_ml.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_calib3d.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_features2d.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_highgui.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_imgproc.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_flann.so.2.4.9
testFeatureDetectImg: /usr/local/lib/libopencv_core.so.2.4.9
testFeatureDetectImg: CMakeFiles/testFeatureDetectImg.dir/build.make
testFeatureDetectImg: CMakeFiles/testFeatureDetectImg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable testFeatureDetectImg"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testFeatureDetectImg.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testFeatureDetectImg.dir/build: testFeatureDetectImg
.PHONY : CMakeFiles/testFeatureDetectImg.dir/build

CMakeFiles/testFeatureDetectImg.dir/requires: CMakeFiles/testFeatureDetectImg.dir/testFeatureDetectImg.cc.o.requires
.PHONY : CMakeFiles/testFeatureDetectImg.dir/requires

CMakeFiles/testFeatureDetectImg.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testFeatureDetectImg.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testFeatureDetectImg.dir/clean

CMakeFiles/testFeatureDetectImg.dir/depend:
	cd /home/thomas/MonoNav/OpenCV && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thomas/MonoNav/OpenCV /home/thomas/MonoNav/OpenCV /home/thomas/MonoNav/OpenCV /home/thomas/MonoNav/OpenCV /home/thomas/MonoNav/OpenCV/CMakeFiles/testFeatureDetectImg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testFeatureDetectImg.dir/depend

