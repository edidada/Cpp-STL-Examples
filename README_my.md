```shell script
clang --version
Apple clang version 11.0.0 (clang-1100.0.33.16)
Target: x86_64-apple-darwin19.0.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin


clang++ --version
Apple clang version 11.0.0 (clang-1100.0.33.16)
Target: x86_64-apple-darwin19.0.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin



```


### deque

deque是双端队列？
初始化，是一次性分配内存还是？

```shell script

Cpp-STL-Examples/deques/deque_ex1.cpp:16:1: error: C++ requires a type specifier for all declarations
main()

```

`main()` 改成 `int main()`


### F

```shell script

CMake Error at /usr/local/Cellar/cmake/3.15.5/share/cmake/Modules/FindPackageHandleStandardArgs.cmake:137 (message):
  Could NOT find GTest (missing: GTEST_LIBRARY GTEST_INCLUDE_DIR
  GTEST_MAIN_LIBRARY)
Call Stack (most recent call first):
  /usr/local/Cellar/cmake/3.15.5/share/cmake/Modules/FindPackageHandleStandardArgs.cmake:378 (_FPHSA_FAILURE_MESSAGE)
  /usr/local/Cellar/cmake/3.15.5/share/cmake/Modules/FindGTest.cmake:197 (FIND_PACKAGE_HANDLE_STANDARD_ARGS)
  FirstGoogleTest/CMakeLists.txt:5 (find_package)

```