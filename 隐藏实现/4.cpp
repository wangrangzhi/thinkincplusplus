#include <iostream>
using namespace std;

class Mapped{
	int x;
	
	protected:
		int y;
		
	public:
		int z;
	
		void shopMap(){
			cout << "x is at" << &x <<endl;
			cout << "y is at" << &y <<endl;
			cout << "z is at" << &z <<endl;
		}
};

int main(){
	Mapped m;
	m.shopMap();	
}