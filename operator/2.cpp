#ifndef NUMBER_H
#define NUMBER_H
#include <cassert>

class Number{
	double val;
	public: 	
		explicit Number(double x= 0.0){
			val = x;
		}
		Number& operator +=(const Number& n){
			val += n.val;
			return *this;
		}
		Number& operator -=(const Number& n){
			val -= n.val;
			return *this;
		}
		Number& operator *=(const Number& n){
			val *= n.val;
			return *this;
		}		
		Number& operator /=(const Number& n){
			assert(n.val != 0.0);
			val /= n.val;
			return *this;
		}
		operator double() const{
			return val;
		}
		
		friend Number operator+(const Number&, const Number&);
		friend Number operator-(const Number&, const Number&);
		friend Number operator*(const Number&, const Number&);
		friend Number operator/(const Number&, const Number&);
};

inline 
Number operator+(const Number& n1, const Number& n2){
	return Number(n1.val + n2.val);
}
inline 
Number operator-(const Number& n1, const Number& n2){
	return Number(n1.val - n2.val);
}

inline 
Number operator*(const Number& n1, const Number& n2){
	return Number(n1.val * n2.val);
}

inline 
Number operator/(const Number& n1, const Number& n2){
	assert(n2.val != 0.0);
	return Number(n1.val / n2.val);
}
#endif

#include <iostream>

#define eval(expr) display(#expr, expr)

void display(const char* s, const Number& res){
	using namespace std;
	cout << s << " = " << res << endl;
}

int main(){
	Number a(1.0), b(2.0);
	eval(a+b);
	eval(a-b);
	eval(a*b);
	eval(a/b);
	eval(a*(a+b) -(b-a)/b);
	a+=b;
	eval(a);
		a-=b;
	eval(a);
		a*=b;
	eval(a);
		a/=b;
	eval(a);
}


