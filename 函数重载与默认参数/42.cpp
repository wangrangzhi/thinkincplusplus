#include <iostream>
using namespace std;

class DefaultArgs{
	public:
		void f(int i = 0, int j = 0, int k = 0){
			cout << "{" << i<< ", " << j << ", " << k <<"}\n";				
		}
};

int main(){
		DefaultArgs a;
	a.f();
	a.f(1);
	a.f(1,2);
	a.f(1,2,3);
	
}