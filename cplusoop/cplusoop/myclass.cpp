#include "stdafx.h"
#include "myclass.h"


myclass::myclass()
{
}


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

 ostream& operator<<(ostream& ou,myclass right) {
	cout << right.x << "  " << right.y << endl;
	return ou;
}

void myclass::print() {
	cout << x << "  " << y << endl;
}