#include <iostream>
#include <cstddef> // For size_t
using namespace std;

class Base {
    int x;
public:
    virtual size_t mySize() const {
        return sizeof *this;
    }
};

class Derived : public Base {
    float y;
public:
    size_t mySize() const {
        return sizeof *this;
    }
};

int main() {
    Base b;
    Derived d;
    cout << "b.mySize() == " << b.mySize() << endl;
    cout << "d.mySize() == " << d.mySize() << endl;
}