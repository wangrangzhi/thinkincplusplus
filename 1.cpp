//: S05:StackOfInt1.cpp {O}
// Uses an array to implement a stack
#include "StackOfInt.h"

// Complete the incomplete type StackImp:
// (This could be in a separate header file)
struct StackImp {
    enum {MAXSIZE = 100};
    int data[MAXSIZE];
    int ptr;
};

void StackOfInt::init() {
    pImpl = new StackImp;
}

int StackOfInt::push(int x) {
    if (pImpl->ptr == StackImp::MAXSIZE)
        return STKERROR;
    else {
        pImpl->data[pImpl->ptr++] = x;
        return x;
    }
}

int StackOfInt::pop() {
    return (pImpl->ptr == StackImp::MAXSIZE)
        ? STKERROR
        : pImpl->data[--pImpl->ptr];
}

int StackOfInt::top() {
    return (pImpl->ptr == StackImp::MAXSIZE)
        ? STKERROR
        : pImpl->data[pImpl->ptr-1];
}

size_t StackOfInt::size() {
    return pImpl->ptr;
}

void StackOfInt::cleanup() {
    delete pImpl;
}