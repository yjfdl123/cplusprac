// µü´úÆ÷ÊÊÅäÆ÷Á·Ï°
# include "stdafx.h"
#include "iteratoradapter.h"


void iteratoradapter::test() {
	vector<int> vec = { 1,2,3,4,5 };
	ostream_iterator<int> out(cout,"<");
	for (auto x : vec) {
		out = x;
	}
}


iteratoradapter::iteratoradapter()
{
}


iteratoradapter::~iteratoradapter()
{
}
