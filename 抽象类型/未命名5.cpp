#include <iostream>

int main(){
	using namespace std;
	
	int* p_int = new int;
	long* p_long = new long;
	char* p_chars = new char[100];
	float* p_floats = new float[100];
	
	cout << "p_int == " << p_int << endl;
	cout << "p_long == " << p_long << endl;
	cout << "p_chars == " << static_cast<void*>(p_chars) << endl;
	cout << "p_floats == " << p_floats << endl;
}
