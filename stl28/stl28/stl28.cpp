// stl28.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> vec;
	vec.reserve(10);
	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}
	vector<int>::reverse_iterator iter = find(vec.rbegin(),vec.rend(),3);
	//cout << iter.base() << endl;
	iter++;
	cout << *iter << endl;

	int tmp;
	cin >> tmp;
	return 0;
}
