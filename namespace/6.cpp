#include <iostream>
#include <cstddef>
	
		class Printer {
    static int count;
public:
    static Printer* create() {
        return (count == 0) ? ++count, new Printer : 0;
    }
    ~Printer() {--count;}
private:
    Printer() {}
};

int Printer::count = 0;

int main() {
    Printer* p1 = Printer::create();
    assert(p1);
    Printer* p2 = Printer::create();
    assert(!p2);
    delete p1;
    Printer* p3 = Printer::create();
    assert(p3);
    delete p3;
}