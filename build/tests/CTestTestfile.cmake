# CMake generated Testfile for 
# Source directory: D:/ChocolateDivider/tests
# Build directory: D:/ChocolateDivider/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(runTests "D:/ChocolateDivider/build/tests/runTests.exe")
set_tests_properties(runTests PROPERTIES  _BACKTRACE_TRIPLES "D:/ChocolateDivider/tests/CMakeLists.txt;20;add_test;D:/ChocolateDivider/tests/CMakeLists.txt;0;")
subdirs("../_deps/googletest-build")
