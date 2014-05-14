#include <iostream>
#include <string>
using namespace std;

class Message{
	string msg;
	public:
		Message(const string& s = "MSG") : msg(s){}
		
		void print(){
			cout << msg <<endl;
		}
		
		void print(const string& suffix){
			cout << msg << ' ' << suffix << endl;
		}
};

int main(){
	Message m1;
	Message m2("Error");
	m1.print();
	m2.print();
	m1.print("sd");
	m2.print("sdsf");	
}