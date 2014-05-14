#include <iostream>

#if NEEDS_FIX
#define for if(0); else for
#endif

int main() {
    using namespace std;
    int i;
    for (i = 0; i < 10; ++i)
        cout << i << ' ';
    cout << endl;
    
    for (int i = 0; i < 10; ++i)
        cout << i << ' ';
    cout << endl;
}