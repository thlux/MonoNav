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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/thomas/MonoNav/OpenCV

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thomas/MonoNav/OpenCV

# Include any dependencies generated for this target.
include CMakeFiles/surfFeatureDetector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/surfFeatureDetector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/surfFeatureDetector.dir/flags.make

CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.o: CMakeFiles/surfFeatureDetector.dir/flags.make
CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.o: surfFeatureDetector.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/thomas/MonoNav/OpenCV/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.o -c /home/thomas/MonoNav/OpenCV/surfFeatureDetector.cc

CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/thomas/MonoNav/OpenCV/surfFeatureDetector.cc > CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.i

CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/thomas/MonoNav/OpenCV/surfFeatureDetector.cc -o CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.s

CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.o.requires:
.PHONY : CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.o.requires

CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.o.provides: CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.o.requires
	$(MAKE) -f CMakeFiles/surfFeatureDetector.dir/build.make CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.o.provides.build
.PHONY : CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.o.provides

CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.o.provides.build: CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.o

# Object files for target surfFeatureDetector
surfFeatureDetector_OBJECTS = \
"CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.o"

# External object files for target surfFeatureDetector
surfFeatureDetector_EXTERNAL_OBJECTS =

surfFeatureDetector: CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.o
surfFeatureDetector: /usr/local/lib/libopencv_videostab.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_video.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_ts.a
surfFeatureDetector: /usr/local/lib/libopencv_superres.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_stitching.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_photo.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_ocl.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_objdetect.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_nonfree.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_ml.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_legacy.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_imgproc.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_highgui.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_gpu.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_flann.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_features2d.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_core.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_contrib.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_calib3d.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_nonfree.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_ocl.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_gpu.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_photo.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_objdetect.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_legacy.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_video.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_ml.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_calib3d.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_features2d.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_highgui.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_imgproc.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_flann.so.2.4.9
surfFeatureDetector: /usr/local/lib/libopencv_core.so.2.4.9
surfFeatureDetector: CMakeFiles/surfFeatureDetector.dir/build.make
surfFeatureDetector: CMakeFiles/surfFeatureDetector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable surfFeatureDetector"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/surfFeatureDetector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/surfFeatureDetector.dir/build: surfFeatureDetector
.PHONY : CMakeFiles/surfFeatureDetector.dir/build

CMakeFiles/surfFeatureDetector.dir/requires: CMakeFiles/surfFeatureDetector.dir/surfFeatureDetector.cc.o.requires
.PHONY : CMakeFiles/surfFeatureDetector.dir/requires

CMakeFiles/surfFeatureDetector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/surfFeatureDetector.dir/cmake_clean.cmake
.PHONY : CMakeFiles/surfFeatureDetector.dir/clean

CMakeFiles/surfFeatureDetector.dir/depend:
	cd /home/thomas/MonoNav/OpenCV && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thomas/MonoNav/OpenCV /home/thomas/MonoNav/OpenCV /home/thomas/MonoNav/OpenCV /home/thomas/MonoNav/OpenCV /home/thomas/MonoNav/OpenCV/CMakeFiles/surfFeatureDetector.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/surfFeatureDetector.dir/depend
