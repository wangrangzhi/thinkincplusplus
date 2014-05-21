#include <iostream>
using namespace std;

class Base{
	public:
		virtual void f(){
			cout << "Base:: f()\n"; 
		}
		virtual void g(){
			cout << "Base:: g()\n"; 
		}
		virtual void h(){
			cout << "Base:: h()\n"; 
		}
};

class Derived : public Base{
	public:
		virtual void f(){
			cout << "Derived::f()\n";
		}
};

int main(){

	Derived d;
	Base* bp = &d;
	bp->f();
	bp->g();
	bp->h();		
}