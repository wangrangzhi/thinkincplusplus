#include <iostream>

class Monitor{
	int count;
	public:
		Monitor(){
			count = 0;
		}	
		
		void incident(){
			++count;
		}
		
		void print(){
			std::cout << count << " incidents\n";
		}
};

void f(){
	static Monitor m;
	m.incident();
	m.print();
}

int main(){
	using namespace std;
	for(int i = 0; i<5; ++i)
		f();	
}