#include <iostream>
#include <cassert>

class Monitor1
{
    int count;
public:
    Monitor1()
    {
        count = 0;
    }
    void incident()
    {
        ++count;
    }
    
    void decrement(){
    	--count;
    }
    
    void print(){
    	std::cout<< count << " incidents\n";
    }
};

class Monitor2{
	Monitor1* pm;
	public:
		Monitor2(Monitor1* p){
			assert(p);
			pm = p;
			pm->incident();
				pm->incident();
			pm->print();
		}
		
		~Monitor2(){
			assert(pm);
			pm->decrement();
			pm->print();
		}
};

Monitor1 g_mon1;


Monitor2 g_mon2(&g_mon1);

int main()
{

}