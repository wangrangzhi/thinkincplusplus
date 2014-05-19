#include <iostream>
#include <vector>
using namespace std;

class Counted{
	int id;
	static int count;
	public:
		Counted():id(count++){
			cout << "Creating Counted(" << id << ")\n";
		}
		~Counted(){
			cout << "Destroying Counted(" << id << ")\n";
		}
		
		void f(){
			cout << "Hi! I'm #" << id << endl;
		}
};

int Counted::count = 0;

int main(){
	Counted *const a = new Counted[3];
	delete a;	
}