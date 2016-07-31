// cplusoop.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "myfunc.h"
#include "myclass.h"

int main()
{
	//myfunc().test();
	myclass x(1,2);
	myclass y(3, 4);
	myclass z = x + y;
	z.print();
	//cout << x;
	//cout << y;
	//<< y << z;
    return 0;
}

