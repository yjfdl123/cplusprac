// stl30.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

template<class T>
void print(T tmp) {
	cout << tmp << endl;
}

int  add(int x) {
	x = x + 10;
	return x;
};

int main()
{
	vector<int> v1(10,10);
	for (int i = 0; i < 10; i++) {
		v1[i] = i;
	}
	vector<int> v2;
	v2.reserve(100);
	vector<int> v3(15, 20);
	for_each(v1.begin(), v1.end(), print<int>);
	transform(v1.begin(),v1.end(), back_inserter(v2),add);
	//transform(v1.begin(),v1.end(), front_inserter(v2),add);
	transform(v1.begin(), v1.end(), v3.begin(), add);
	for_each(v2.begin(), v2.end(), print<int>);
	for_each(v3.begin(), v3.end(), print<int>);

	int tmp;
	cin >> tmp;
    return 0;
}

