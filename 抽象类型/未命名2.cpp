#include <iostream>
using namespace std;

struct HasInt{
	int x;
	
	void setInt(int newX){
		x = newX;
	}
	
	int getInt(){
		return x;
	}
};

int main(){
	HasInt h;
	h.setInt(6);
	cout << h.getInt() << endl; 
}