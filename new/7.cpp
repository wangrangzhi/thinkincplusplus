#include <iostream>
#include <sstream>
#include <new>
#include <string>
#include <map>
#include <cstddef> // For size_t
using namespace std;

class Track {
    static map<void*, string> allocs;
public:
    static void* operator new(size_t size, const char* file,
                              int line);
    static void operator delete(void* p);
    static void display();
};

map<void*, string> Track::allocs;

void* Track::operator new(size_t size, const char* file,
                          int line) {
    ostringstream os;
    os << file << ", line " << line;
    void* addr = ::operator new(size);
    allocs.insert(make_pair(addr, os.str()));
    return addr;
}
    
void Track::operator delete(void* p) {
    allocs.erase(p);
    ::operator delete(p);
}

void Track::display() {
    map<void*, string>::iterator p = allocs.begin();
    while (p != allocs.end()) {
        cout << p->first << ", " << p->second << endl;
        ++p;
    }
}

// Preprocessor trick:
#define new new (__FILE__, __LINE__)

int main() {
    Track* t1 = new Track;
    Track* t2 = new Track;
    Track* t3 = new Track;
    Track::display();
    cout << endl;

    delete t3;
    Track::display();
    cout << endl;

    delete t2;
    Track::display();
    cout << endl;

    delete t1;
    Track::display();
}
