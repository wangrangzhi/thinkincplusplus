#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Text{
	string text;
	
	public:
		Text(){}
		Text(const string& fname){
			ifstream ifs(fname.c_str());
			string line;
			while(getline(ifs, line))
				text += line + '\n';
		}
		
		string content(){
			return text;
		}
};

int main(int argc, char* argv[]){
	if(argc > 1){
		Text t1;
		Text t2(argv[1]);
		cout << "t1 :\n" << t1.content() << endl;
		cout << "t2 :\n" << t2.content() << endl;
	}	
}