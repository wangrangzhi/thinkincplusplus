#include <iostream>
using namespace std;

class HasDouble{

	public:
		double x;
		HasDouble(double x){
			this->x = x;
		}
		void print(){
			using namespace std;
			cout << x << endl;
		}
};

int main(){

	HasDouble h(3);
	HasDouble* hp = &h;
	
	double HasDouble::* px = &HasDouble::x;
	void (HasDouble::*pmf)() = &HasDouble::print;
	
	cout << h.*px << endl;
	(h.*pmf)();
	
	cout << hp->*px << endl;
	(hp->*pmf)();
	
	
}