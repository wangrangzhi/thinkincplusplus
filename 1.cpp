#include <iostream>

class HasArray {
public:
    enum {LEN = 5};
    int a[LEN];
    HasArray() {
        for (int i = 0; i < LEN; ++i)
            a[i] = i;
    }
};

int main() {
    using namespace std;
    HasArray h;
    int (HasArray::* pa)[5] = &HasArray::a;
    for (int i = 0; i < HasArray::LEN; ++i)
        cout << (h.*pa)[i] << ' ';
    cout << endl;
}
