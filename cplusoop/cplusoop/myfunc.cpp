#include "stdafx.h"
#include "myfunc.h"

inline double square(double x) { return x*x; };

myfunc::myfunc()
{
}


myfunc::~myfunc()
{
}

void myfunc::test()
{
	double x = 30;
	double& y = x;
	y = 40;
	cout << square(x) << endl;
}
