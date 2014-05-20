#include <iostream>
using namespace std;

class Base{
	public:
		static void f(){
			cout << "Base::f()\n";
		}
		static void g(){
			cout << "Base::g()\n";
		}
};

class Derived : public Base{
	public:
		static void g(int){
			cout << "Derived::g(int)\n";
		}
};

int main(){

	Derived::f();
	Derived::g(1);
	
}