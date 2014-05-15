#include <iostream>
#include <cstddef>

void f(){
	using namespace std;
	struct Int{
		int n;
		Int() : n(0){}
	};
	
	Int a[3];
	size_t count = sizeof a / sizeof a[0];
	
	for(size_t i = 0; i < count-1; ++i)
		cout << a[i].n << ' ';
	
	cout << endl; 	
}

int main(){
	f();
}