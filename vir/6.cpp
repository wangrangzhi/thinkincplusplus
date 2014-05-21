#include <iostream>
using namespace std;

class Base{
	public:
		virtual ~Base(){}
		virtual Base* clone() const{
			return new Base(*this); 
		}
		virtual void f(){
			cout << "Base::f()\n";
		}
};

class Derived : public Base{
	public: 
		virtual Derived* clone() const {
			return new Derived(*this);
		}
		virtual void f(){
			cout << "Deddddddddddrived:;f()\n";
		}
};

void invoke_f_and_die(Derived* d){
	d->f();
	delete d;
}

int main(){

	Derived d;
	Base* d2 = d.clone();
	d2->f();
	delete d2;
	invoke_f_and_die(d.clone());
	
}