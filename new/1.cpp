#include <iostream>
using namespace std;

class Counted{
	int id;
	static int count;
	public:
		Counted() : id(count++){
			cout << "Creating counted(" << id << ")\n";
		}
		~Counted(){
			cout << "Destroying counted(" << id << ")\n";
		}
};

int Counted::count = 0;

int main(){

	Counted* c = new Counted;
	delete c;
	Counted * const a = new Counted[10];
	delete [] a;
	
}