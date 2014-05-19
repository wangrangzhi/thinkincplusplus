#include <iostream>
#include <vector>
#include <cstddef>
using namespace std;

class Counted{
	int id;
	static int count;
	public:
		Counted() : id(count++){
			cout << "Creating Counted(" << id << ")\n";
		}
		~Counted(){
			cout << "Destroying Counted(" << id << ")\n";
		}
		void f(){
			cout << "Hi! I;m #" << id << endl;
		}
};

int Counted::count = 0;

int main(){
	vector<Counted*> v;
	for(size_t i = 0; i<3; ++i)
		v.push_back(new Counted);
		
	for(size_t i = 0; i<v.size(); ++i)
		v[i]->f();
		
	for(size_t i = 0; i<v.size(); ++i)
		delete v[i]; 	
}