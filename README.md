# cpp_stub_for_c
封装cpp_stub接口供c调用

1.用g++将接口编译成静态库：
g++ stub_for_c.cpp -o stub_for_c.o
ar rcs libstub_for_c.a stub_for_c.o

2.编译：gcc -g stub_test.c libstub_for_c.a -o stub_c++ -lstdc++
