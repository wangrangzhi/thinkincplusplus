#include <iostream>
#include <string>
using namespace std;

class Traveler{
	string str;
	public:
		Traveler(const string& s) : str(s){}
		Traveler(const Traveler& t) : str(t.str){}
		Traveler& operator=(const Traveler& t){
			if(this != &t)
				str = t.str;
			return *this;
		}
		
		string getString() const{
			return str;
		}
};

class Pager{
	string str;
	public:
		Pager(const string& s) : str(s){}
		Pager(const Pager& p) : str(p.str){}
		Pager& operator=(const Pager& p){
			if(this != &p)
				str = p.str;
			return *this;
		}
		
		string getString() const{
			return str;
		}
};

class BusinessTraveler : public Traveler{
	Pager pager;
	public:
		BusinessTraveler() : Traveler(""), pager(""){}
		BusinessTraveler(const string& t, const string& p) 
			: Traveler(t), pager(p){}
		BusinessTraveler(const BusinessTraveler& b)
			: Traveler(b), pager(b.pager){}
		BusinessTraveler& operator=(const BusinessTraveler& b){
			if(this != &b){
				Traveler::operator=(b);
				pager = b.pager;
			}
			return *this;
		}
		
		friend ostream& operator<<(ostream& os, const BusinessTraveler& b){
			return os << "{\"" << b.getString() << "\",\"" << b.pager.getString() << "\"}";			
		}
};

int main(){
	BusinessTraveler b1("Joe business", "page 1");
	cout << b1 << endl;
	BusinessTraveler b2("Jane business", "page 2");
	cout << b2 << endl;
	BusinessTraveler b3;
	cout << b3 << endl;
	BusinessTraveler b4(b1);
	cout << b4 << endl;
	b3 = b2;
	cout << b3 << endl;		
}