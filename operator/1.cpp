#ifndef HASINT_H
#define HASINT_H
#include <iosfwd>

class HasInt{
	int n;
	public:
		HasInt(int i = 0);
		HasInt& operator++();
		const HasInt operator++(int);
		HasInt& operator--();
		const HasInt operator--(int);
		HasInt operator-() const;
		HasInt& operator+=(const HasInt&);
		HasInt& operator-=(const HasInt&);	
		
		friend std::ostream& operator<<(std::ostream&, const HasInt&);
		friend HasInt operator+(const HasInt&, const HasInt&);
		friend HasInt operator-(const HasInt&, const HasInt&);
};

inline
HasInt::HasInt(int i){
	n = i;
}

inline
HasInt HasInt::operator-() const{
	return HasInt(-n);
}

inline
HasInt& HasInt::operator+=(const HasInt& h){
	n += h.n;
	return *this;
}

inline
HasInt& HasInt::operator-=(const HasInt& h){
	n -= h.n;
	return *this;
}

inline 
HasInt& HasInt::operator++()
{
	++n;
	return *this;
}


inline
const HasInt HasInt::operator++(int)
{
	const HasInt old = *this;
	++(*this);
	return old;
}

inline 
HasInt& HasInt::operator--()
{
	--n;
	return *this;
}


inline
const HasInt HasInt::operator--(int)
{
	const HasInt old = *this;
	--(*this);
	return old;
}

inline
HasInt operator+(const HasInt& h1, const HasInt& h2){
	return HasInt(h1.n + h2.n);
}

inline
HasInt operator-(const HasInt& h1, const HasInt& h2){
	return HasInt(h1.n - h2.n);
}

#endif

#include <iostream>
using namespace std;

ostream& operator<<(ostream& os, const HasInt& h){
	return os << h.n;
}

int main(){
	using namespace std;
	HasInt x(1), y(2), z, w;
	
	cout<< "x = " << x 
		<< ", y = " << y 
		<< ", z = " << z 
		<< ", w = " << w
		<< endl;
		
	w = ++ x + y++ - --z;
	cout<< "x = " << x 
		<< ", y = " << y 
		<< ", z = " << z 
		<< ", w = " << w
		<< endl;
		
	w = x-y;
	z = x+y;
	x+=y;
	y-=x;
		cout<< "x = " << x 
		<< ", y = " << y 
		<< ", z = " << z 
		<< ", w = " << w
		<< endl;
}