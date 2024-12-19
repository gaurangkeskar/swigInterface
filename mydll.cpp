//#include "mydll.h"
//#include "pch.h"
//#include <iostream>
//
//void sayHello() {
//    std::cout << "Hello from mydll!" << std::endl;
//}
//
//int add(int a, int b) {
//    return a + b;
//}


// mydll.cpp
#include "mydll.h"

#include <iostream>

// Implementation of sayHello
//void sayHello() {
//    std::cout << "Hello from C++!" << std::endl;
//}
//
//// Implementation of add
//int add(int a, int b) {
//    return a + b *a;
//}


int MyClass::add(int a, int b)
{
    return a + b;
}