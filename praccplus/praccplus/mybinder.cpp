#include "stdafx.h"
# include "base.h"
#include "mybinder.h"


mybinder::mybinder()
{
}


mybinder::~mybinder()
{
}

void mybinder::test()
{
	vector<int> vec = { 1,2,3,4,5 };
	auto plus10 = bind(plus<int>(),std::placeholders::_1,10);
	for_each(vec.begin(), vec.end(), plus10);
	auto coutd = [](int d) {
		cout << d << endl;
	};
	for_each(vec.begin(), vec.end(), coutd);
	printT(vec);
}
