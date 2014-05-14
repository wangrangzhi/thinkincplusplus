#include <iostream>
#include <string>
using namespace std;

class Message{
	string msg;
	public:
		Message(const string& s) : msg(s){}
		void print(){
			cout << msg << endl;
		}
		
		void print(const string& prefix){
			cout << prefix << ": " << msg << endl;
		}	
};

int main(){
	Message m("This is a message");
	m.print();
	m.print("sd");	
}