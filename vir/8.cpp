#include <iostream>
using namespace std;

class Shape{
	public:
		enum Id{Circles, Squares};
		Shape(){};
		virtual Id whatAmI() = 0;		
};

class Circle : public Shape{
	public:
		virtual Id whatAmI(){
			return Circles;
		}
};

class Square : public Shape{
	public:
		virtual Id whatAmI(){
			return Squares;
		}
};

int main(){
		Circle c;
		Shape* s = &c;
		
		if(s->whatAmI() == Shape::Circles)
			cout << "It's a circle!" << endl;
		else if(s->whatAmI() == Shape::Squares)
			cout << "It's a square!" << endl;
}