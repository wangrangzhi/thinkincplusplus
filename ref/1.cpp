#include <iostream>
using namespace std;

void nextc(char& c){
	static char letter = 'g';
	c = letter++;
}

int main(){
	char c = 'z';
	cout << " c = " << c <<endl;
	nextc(c);	
	
	cout << " c = " << c <<endl;
	nextc(c);
	
	cout << " c = " << c <<endl;
}