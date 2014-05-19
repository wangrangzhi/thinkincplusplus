#include <iostream>
#include <cstddef>
using namespace std;

class HasArray
{
	size_t siz;
	public:
		int* a;
		HasArray(size_t siz){
			a = new int[siz];
			for(size_t i = 0; i<siz; ++i)
				a[i] = i;
				this->siz = siz;
		}
		
		~HasArray(){
			delete a;
		}
		
		size_t size() const{
			return siz;
		}
};

int main(){
	HasArray h(5);
	int* HasArray::* pa = &HasArray::a;
	for(size_t i=0; i<h.size(); ++i)
		cout << (h.*pa)[i] << ' ';
		
	cout << endl;	
}