#include <iostream>
using namespace std;

struct HasInt {
	int x;
	void setInt(int x){
		this->x = x;
	}
	
	int getInt(){
		return this->x;
	}
	
	void display(){
		cout << this->getInt() << endl;
	}
};

int main(){
	HasInt h;
	h.setInt(56);
	h.display();
}