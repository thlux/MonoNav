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
include CMakeFiles/sobelDerrivVid.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sobelDerrivVid.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sobelDerrivVid.dir/flags.make

CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.o: CMakeFiles/sobelDerrivVid.dir/flags.make
CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.o: sobelDerrivVid.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/thomas/MonoNav/OpenCV/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.o -c /home/thomas/MonoNav/OpenCV/sobelDerrivVid.cc

CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/thomas/MonoNav/OpenCV/sobelDerrivVid.cc > CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.i

CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/thomas/MonoNav/OpenCV/sobelDerrivVid.cc -o CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.s

CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.o.requires:
.PHONY : CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.o.requires

CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.o.provides: CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.o.requires
	$(MAKE) -f CMakeFiles/sobelDerrivVid.dir/build.make CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.o.provides.build
.PHONY : CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.o.provides

CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.o.provides.build: CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.o

# Object files for target sobelDerrivVid
sobelDerrivVid_OBJECTS = \
"CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.o"

# External object files for target sobelDerrivVid
sobelDerrivVid_EXTERNAL_OBJECTS =

sobelDerrivVid: CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.o
sobelDerrivVid: /usr/local/lib/libopencv_videostab.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_video.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_ts.a
sobelDerrivVid: /usr/local/lib/libopencv_superres.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_stitching.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_photo.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_ocl.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_objdetect.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_nonfree.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_ml.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_legacy.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_imgproc.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_highgui.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_gpu.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_flann.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_features2d.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_core.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_contrib.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_calib3d.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_nonfree.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_ocl.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_gpu.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_photo.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_objdetect.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_legacy.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_video.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_ml.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_calib3d.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_features2d.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_highgui.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_imgproc.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_flann.so.2.4.9
sobelDerrivVid: /usr/local/lib/libopencv_core.so.2.4.9
sobelDerrivVid: CMakeFiles/sobelDerrivVid.dir/build.make
sobelDerrivVid: CMakeFiles/sobelDerrivVid.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable sobelDerrivVid"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sobelDerrivVid.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sobelDerrivVid.dir/build: sobelDerrivVid
.PHONY : CMakeFiles/sobelDerrivVid.dir/build

CMakeFiles/sobelDerrivVid.dir/requires: CMakeFiles/sobelDerrivVid.dir/sobelDerrivVid.cc.o.requires
.PHONY : CMakeFiles/sobelDerrivVid.dir/requires

CMakeFiles/sobelDerrivVid.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sobelDerrivVid.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sobelDerrivVid.dir/clean

CMakeFiles/sobelDerrivVid.dir/depend:
	cd /home/thomas/MonoNav/OpenCV && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thomas/MonoNav/OpenCV /home/thomas/MonoNav/OpenCV /home/thomas/MonoNav/OpenCV /home/thomas/MonoNav/OpenCV /home/thomas/MonoNav/OpenCV/CMakeFiles/sobelDerrivVid.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sobelDerrivVid.dir/depend
