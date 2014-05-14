#include <iostream>
using namespace std;

void twoArgs(int i, float x){
	cout << "twoArgs(" << i << ", " << x << ")\n";
}

void placeHolder(int i, float){
	cout << "twoArgs(" << i << ",)\n";
	
}

int main(){
	twoArgs(1, 2);
	placeHolder(1, 2);	
}