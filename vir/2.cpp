#include <iostream>
using namespace std;

class Base{
	int x;
};

class Derived : public Base{
	float y;	
};

void mySize(Base b){
	cout << "mySize ==" << sizeof b << endl;
}

int main(){
	Base b;
	Derived d;
	cout << "sizeof b == " << sizeof b << endl;	
	cout << "sizeof d == " << sizeof d << endl;	
	mySize(b);
	mySize(d);
}