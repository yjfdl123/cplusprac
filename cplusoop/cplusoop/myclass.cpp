#include "stdafx.h"
#include "myclass.h"



myclass::~myclass()
{
}

myclass::myclass(int a , int b ) {
	x = a;
	y = b;
}

myclass myclass::operator+(const myclass left) const {
	myclass sum(0,0);
	sum.x = left.x + (*this).x;
	sum.y = left.y + y;
	return sum;
}

myclass& operator* (myclass& left, myclass& right) {
	left.x *= right.x;
	left.y *= right.y;
	return left;
}

 ostream& operator<<(ostream& ou,myclass right) {
	
	cout << right.x << "  " << right.y << endl;
	return ou;
}

 myclass operator*(myclass & left, myclass right)
 {
	 return myclass();
 }

void myclass::print() {
	cout << x << "  " << y << endl;
}

void myclass::printself() {
	cout << "base printself";
	print();
}