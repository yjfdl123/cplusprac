// cplusoop.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "myfunc.h"
#include "myclass.h"
#include "myinherit.h"


void test_myclass() {
	myclass x(1, 2);
	myclass y(3, 4);
	myclass z = x + y;
	cout << x << y << z;
	myclass& d = x*y;
	//z.print();
	
	cout << d;
}

void test_myinherit() {
	myinherit x = myinherit(3, 5,7);
	x.print();
}

void test_overload() {
	myclass a = myclass(1, 2);
	myinherit b = myinherit(6, 7, 30);
	myclass* c = &a;
	cout << "dizhi:" << &c << endl;
	cout << "test no virturl\n";
	c->print();
	c = &b;
	cout << "dizhi:" << &c << endl;
	c->print();

	cout << "test virtual\n";
	myclass* d = &a;
	cout << "dizhi:" << &d << endl;
	d->printself();
	d = &b;
	cout << "dizhi:" << &d << endl;
	d->printself();
	
	myclass& e = b;
	b.printself();
}

int main()
{
	//myfunc().test();
	//test_myclass();
	//test_myinherit();
	test_overload();
    return 0;
}

