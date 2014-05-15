#include <iostream>
#include <string>
#include <cstddef> // For size_t
using namespace std;

#define DEBUG(x) cout << #x " = " << x << endl

int main(int argc, char* argv[]) {
    if (argc > 1) {
        string s(argv[1]);
        size_t siz = s.size();
        for (size_t n = 0; n < siz-5; ++n) {
            s = s.erase(siz - n - 1, 1);
            DEBUG(s);
        }
    }
}