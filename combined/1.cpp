#include <iostream>
using namespace std;

class A{
	public:
		A(){
			cout << "A::A()\n";
		}
		~A(){
			cout << "A::~A()\n";
		}	
};

class B : public A{
	public:
		B(){
			cout << "B::B()\n";
		}
		~B(){
			cout << "B::~B()\n";
		}	
};

class C :public B{
	public:
		C(){
			cout << "C::C()\n";
		}
		
			
		~C(){
			cout << "C::~C()\n";
		}	
};

int main(){
	C c;
}