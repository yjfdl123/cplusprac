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
	myinherit x = myinherit(3, 5);
	x.print();
}

int main()
{
	//myfunc().test();
	test_myclass();
	//test_myinherit();
    return 0;
}

