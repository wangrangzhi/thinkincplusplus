#include <iostream>
using namespace std;

class HasStuff;

class GoodFriend{
	public:
		void hasAccess(HasStuff* p);
		void hasNoAccess(HasStuff* p){
			cout << "Cannot access" << p << endl;
		}
};

class HasStuff{
	private :
		int x;
	
	friend class BestFriend;
	friend void GoodFriend::hasAccess(HasStuff*);		
};

void GoodFriend::hasAccess(HasStuff* p){
	cout << "From GoodFriend::HasAccess" << p->x << endl;
}

class BestFriend{
	public:
		void initFriend(HasStuff* p){
			p->x = 5;
		}
		
		void queryFriend(HasStuff* p){
			cout << "From BestFriend" << p->x << endl;
		}
};


int main(){

	HasStuff h;
	
	BestFriend b;
	b.initFriend(&h);
	b.queryFriend(&h);
	
	GoodFriend g;
	g.hasAccess(&h);
	g.hasNoAccess(&h);
	
	
}