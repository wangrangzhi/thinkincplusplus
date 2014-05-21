#include <iostream>
using namespace std;

class Dog{
	public:
		int run() const {
			cout << "run\n";
			return 0;
		}
		int eat(int i) const{
			cout << "eat\n";
			return i;
		}
		
}

int main(){
	
}