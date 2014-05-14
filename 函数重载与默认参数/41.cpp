#include <iostream>
using namespace std;

 class ManyArgs{
 	public:
 		void f(){
			cout << "{}\n";		 	
		 }
		 void f(int i){
			cout << "{" << i <<"}\n";		 	
		 }
 		 void f(int i, int j){
			cout << "{" << i<< ", " << j <<"}\n";		 	
		 }
		 void f(int i, int j, int k){
			cout << "{" << i<< ", " << j << ", " << k <<"}\n";		 	
		 }
 };

int main(){
	ManyArgs a;
	a.f();
	a.f(1);
	a.f(1,2);
	a.f(1,2,3);
}