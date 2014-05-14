#include <iostream>
using namespace std;

class HasFloats {
    const float x_;
    float y_;
public:
    HasFloats(float x, float y)
        : x_(x), y_(y)
    {}
    void display() const {
        cout << "x == " << x_ << ", y == " << y_ << endl;
    }
};

int main() {
    HasFloats h(3,4);
    h.display();
}
