#include <iostream>


inline int band(int x){
	return ( x>5 && x<10) ? x : 0;
}

int main(){
	using namespace std;
	
	for(int i = 4; i<50; i++){
		int a = i;
		cout << "a = " << a << endl << "\t";
		cout << "band(++a) = " << band(++a) << endl;
		cout << "\t a = " << a << endl;
	}
	
	
}