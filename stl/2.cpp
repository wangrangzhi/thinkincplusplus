#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

class Obj{
	static int i, j;
	public:
		void f(){cout << i++ << endl;}
		void g(){cout << j++ << endl;}
};

int Obj::i = 47;
int Obj::j = 11;

template<typename T>
class ObjContainer{
	vector<T*> a;
	public:
		void add(T* obj){a.push_back(obj);}
		class SmartPointer;
		friend class SmartPointer;
		class SmartPointer{
			ObjContainer& oc;
			unsigned int index;
			public:
				SmartPointer(ObjContainer& objc):oc(objc){
					index = 0;
				}
			bool operator++(){
				if(index >=oc.a.size()) return false;
				if(oc.a[++index] == 0) return false;
				return true;
			}
			bool operator++(int){
				return operator++();
			}
			T* operator->() const{
				assert(oc.a[index] != 0);
				return oc.a[index];
			}
		};
		
		SmartPointer begin(){
			return SmartPointer(*this);
		}
};

int main(){
	const int sz = 10;
	Obj o[sz];
	ObjContainer<Obj> oc;
	for(int i = 0; i<sz; i++)
			oc.add(&o[i]);
	ObjContainer<Obj>::SmartPointer sp = oc.begin();
	do{
		sp->f();
		sp->g();
	}while(++sp);
}