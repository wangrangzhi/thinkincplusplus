#include <iostream>

struct Outer{
	int o;
	void setO(int n){
		o = n;
	}
	
	int getO(){
		return o;
	}
	
	struct Inner{
		int i;
		void setI(int n){
			i = n;
		}
		
		int getI(){
			return i;
		}
	};	
	
};

int main(){
	using namespace std;
	
	Outer o;
	o.setO(3);
	cout << o.getO() << endl;
	
	
	Outer::Inner i;
	i.setI(4);
	cout << i.getI() << endl;
}