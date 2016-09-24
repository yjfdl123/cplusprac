// stl32.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <set>
#include <functional>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> vec;
	vec.reserve(1000);
	for (int i = 0; i < 10; i++){
		vec.push_back(rand() % 100);
	};

	int tmp;
	cin >> tmp;
	return 0;
}

