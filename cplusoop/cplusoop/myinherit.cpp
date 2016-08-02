#include "stdafx.h"
#include "myclass.h"


myinherit::myinherit(int x,int y,int th):myclass(x,y)
{
	z = th;
}


myinherit::~myinherit()
{
}


//myinherit operator*(myinherit& left, myinherit right) {
//	
//}

void myinherit::print() {
	cout << "myinherit print :";
	myclass::print();
	cout <<"  " << z << endl;
}

void myinherit::printinherit() {
	cout << "printinherit:" << z << endl;
}

void myinherit::printself() {
	cout << "inherit printself";
	myinherit::print();
}