// µü´úÆ÷ÊÊÅäÆ÷Á·Ï°
# include "stdafx.h"
#include "iteratoradapter.h"


void iteratoradapter::test() {
	vector<int> vec = { 1,2,3,4,5 };
	ostream_iterator<int> out(cout,"<");
	for (vector<int>::iterator iter = vec.begin(); iter != vec.end();iter++) {
		*out = *iter;
	}
}


iteratoradapter::iteratoradapter()
{
}


iteratoradapter::~iteratoradapter()
{
}
