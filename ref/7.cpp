#include <iostream>
using namespace std;

class HasArray{
	public:
		enum {
			LEN = 5
		};
		
		int a[LEN];
		HasArray(){
			for(int i = 0; i<LEN; ++i)
				a[i] = i;
		}
};

int main(){
	HasArray h;
	int (HasArray::* pa)[5] = &HasArray::a;
	for(int i = 0; i<HasArray::LEN; ++i)
		cout << (h.*pa)[i] << ' ';
		cout << endl;	
}