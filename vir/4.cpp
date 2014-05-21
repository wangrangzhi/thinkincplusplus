#include <ctime>
#include <iostream>
using namespace std;

class Base{
	public:
		void nonvirt();
		virtual void virt();
};

void Base::nonvirt(){}
void Base::virt(){}

class Derived : public Base {};

double measure(Base* bp, void (Base::* f)()){
	clock_t start = clock();
	for(int i = 0; i < 10000000L; ++i)
		(bp->*f)();
	clock_t stop = clock();
	return static_cast<double>(stop - start) / CLOCKS_PER_SEC;
	
}

int main(){
	Derived d;
	cout << measure(&d, &Base::nonvirt) << endl;
	cout << measure(&d, &Base::virt) << endl;	
}