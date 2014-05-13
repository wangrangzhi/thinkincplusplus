//: S04:MyStruct.h
#ifndef MYSTRUCT_H
#define MYSTRUCT_H

struct MyStruct {
    void f();
};

#endif ///:~
//: S04:MyStruct.cpp {O}

#include <iostream>
using namespace std;

void MyStruct::f() {
    cout << "MyStruct::f\n"; 
} ///:~
//: S04:Exercise3.cpp
//{L} MyStruct
#include "MyStruct.h"

int main() {
    MyStruct m;
    m.f();
}
///:~