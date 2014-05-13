#ifndef MYSTRUCT_H
#define MYSTRUCT_H

struct MyStruct
{
	void f();
};

#endif

#include <iostream>
using namespace std;

void MyStruct::f() {
    cout << "MyStruct::f\n"; 
} 

#include "MyStruct.h"

int main() {
	MyStruct m;
	m.f();
}