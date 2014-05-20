#include <iostream>
#include <vector>
#include <cstddef>
using namespace std;

class Rodent{
	public:
		virtual ~Rodent() {
			cout << "~Rodent\n";
		}
		virtual void eat() = 0;
		virtual void infest() = 0;
		virtual void suqeak() = 0;
};

class Mouse : public Rodent{
	public:
		~Mouse(){cout << "~Mouse\n";}
		void eat(){cout << "Mouse::eat\n";}
		void infest(){cout << "Mouse::infest\n";}
		void suqeak(){cout << "Mouse::squeak\n";}
};

class Gerbil : public Rodent{
	public:
		~Gerbil(){cout << "~Gerbil\n";}
		void eat(){cout << "Gerbil::eat\n";}
		void infest(){cout << "Gerbil::infest\n";}
		void suqeak(){cout << "Gerbil::squeak\n";}
};

class Hamster : public Rodent{
	public:
		~Hamster(){cout << "~Hamster\n";}
		void eat(){cout << "Hamster::eat\n";}
		void infest(){cout << "Hamster::infest\n";}
		void suqeak(){cout << "Hamster::squeak\n";}
};

void doRodentThings(vector<Rodent*>& v){
	for(size_t i = 0; i<v.size(); ++i){
		v[i]->eat();
		v[i]->infest();
		v[i]->suqeak();
	}
}

int main(){
	
	vector<Rodent*> v;
	v.push_back(new Mouse);
	v.push_back(new Gerbil);
	v.push_back(new Hamster);	
	doRodentThings(v);
}