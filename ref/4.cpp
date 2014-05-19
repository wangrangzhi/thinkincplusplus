#include <iostream>
using namespace std;

class HasPointer{
	double* p;
	public:
		HasPointer(double x){
			p = new double(x);
		}
		
		~HasPointer(){
			cout << "~HasPointer()\n";
			delete p;
		}
		
		void print(){
			cout << *p << endl;
		}
};

void f(HasPointer hp){
	hp.print();
}


int main(){
	HasPointer hp(5);
//	f(hp);	
}