//#ifndef MYDLL_H
//#define MYDLL_H
//
//#ifdef MYDLL_EXPORTS
//#define MYDLL_API __declspec(dllexport)
//#else
//#define MYDLL_API __declspec(dllimport)
//#endif
//
//extern "C" {
//    MYDLL_API void sayHello();          // Function to print a message
//    MYDLL_API int add(int a, int b);    // Function to add two integers
//}
//
//#endif // MYDLL_H



// mydll.h
#pragma once

#ifdef MYDLL_EXPORTS
#define MYDLL_API __declspec(dllexport)
#else
#define MYDLL_API __declspec(dllimport)
#endif


class MYDLL_API MyClass {
public:
    int add(int a, int b);
};
// Function declarations
//extern "C" {
//    MYDLL_API void sayHello();
//    MYDLL_API int add(int a, int b);
//}

//extern "C" {
//    MyClass;
//}