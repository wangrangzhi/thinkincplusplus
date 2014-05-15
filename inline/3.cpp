#include <iostream>
#include <cassert>
enum Hue{
	RED, BLUE, YELLOW
};

const char* printHue(Hue h){
	static const char* hues[] = {"red", "blue", "yellow"};
	assert(RED <= h && h<=YELLOW);
	return hues[h];
}

class Color{
	Hue hue_;
	public:
		Color(Hue h) : hue_(h){}
		
		Hue hue() const{
			return hue_;
		}
		
		void hue(Hue h){
			hue_ = h;
		}
};

using namespace std;

int main(){
	Color c(BLUE);
	cout << printHue(c.hue()) << endl;
	Color b(RED);
	cout << printHue(b.hue()) << endl;
}