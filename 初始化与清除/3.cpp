#include <iostream>
#include <cstddef>
using namespace std;

void printDoubles(double a[], size_t n){
	for(size_t i = 0; i<n; ++i)
		cout << a[i] << ' ';
	cout << endl;
}

int main(){
	double a[20] = {
		10.0, 20.0
	};
	
	size_t n = sizeof a / sizeof a[0];
	printDoubles(a, n);
	
	double b[] = {
		30.0, 40.0, 50.0	
	};	
	n = sizeof b / sizeof b[0];
	printDoubles(b, n);
}