#include <iostream>

struct DataOnly{
	int x;
};

struct Both{
	int x;
	void setX(int);
	int getX();
};

struct Nothing{
};

int main(){
	using namespace std;
	
	cout << sizeof(DataOnly) <<endl;
	cout << sizeof(Both) <<endl;
	cout << sizeof(Nothing) <<endl;
}