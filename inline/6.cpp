#include <iostream>
#include <string>
using namespace std;

#define FIELD(type, name)                   \
private:                                    \
    type name ## _;                         \
public:                                     \
    type name() const {return name ## _;}   \
    void name(type val) {name ## _ = val;}

class C {
FIELD(int, foo);
FIELD(float, bar);
FIELD(string, baz);
};

int main() {
    C c;
    c.foo(1);
    c.bar(2.0);
    c.baz("three");
    cout << c.foo() << endl;
    cout << c.bar() << endl;
    cout << c.baz() << endl;
}