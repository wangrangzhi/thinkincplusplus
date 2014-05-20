#include <iostream>
#include <sstream>
#include <new>
#include <string>
#include <vector>
#include <cstddef>
using namespace std;

class Track{
	static vector<string> allocs;
	public:
		static void* operator new(size_t size, const char* file, int line);
		static void display();
};

vector<string> Track::allocs;

void* Track::operator new(size_t size, const char* file, int line){
	ostringstream os;
	os << file << ", line" << line;
	allocs.push_back(os.str());
	return ::operator new(size);
}

void Track::display(){
	for(size_t i = 0; i < allocs.size(); ++i)
		cout << allocs[i] << endl;
}

#define new new (__FILE__, __LINE__)

int main(){


	
	Track* t1 = new Track;
	Track* t2 = new Track;
	Track* t3 = new Track;
	Track::display();
	delete t3;
	delete t2;
	delete t1;
}