%module mydll
%{
#include "mydll.h"
%}

extern "C" {
    class MyClass;
}
