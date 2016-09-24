// stl31.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

template<class T>
void print(T tmp) {
	cout << tmp << "  ";
}

//template <class T>
//void printvec(T vec) {
void printvec(vector<int> vec){

	for_each(vec.begin(), vec.end(), print<int>);
	cout << endl;
}

int main()
{
	vector<int> vec1;
	int num=30;
	vec1.reserve(num);
	vec1.push_back(30);
	vec1.push_back(30);
	vec1.push_back(30);
	for (int i = 3; i < num; i++) {
		vec1.push_back(rand()%100);
	};
	printvec(vec1);
	cout << endl;
	sort(vec1.begin(), vec1.end());
	//partial_sort(vec1.begin(), vec1.begin() + 10, vec1.end());
	//nth_element(vec1.begin(), vec1.begin() + 10, vec1.end());
	cout << "binary:"<<binary_search(vec1.begin(),vec1.end(),30) << endl;
	cout << "lower : " << distance(vec1.begin(),lower_bound(vec1.begin(),vec1.end(),30 )) << endl;
	cout << "upper:  " << distance(vec1.begin(),upper_bound(vec1.begin(),vec1.end(),30)) << endl;
	typedef vector<int>::iterator veciter;
	pair<veciter, veciter> xx = equal_range(vec1.begin(),vec1.end(),30);
	cout << "range:"<<distance(xx.first,xx.second) << endl;
	int len = 0;
	len = distance(vec1.begin(), vec1.end());
	cout << "distance:"<<len << endl;
	printvec(vec1);
	vec1.erase(unique(vec1.begin(),vec1.end()),vec1.end());
	cout << "unique:";
	printvec(vec1);

	vector<int> vec2;
	vec2.reserve(100);
	copy(vec1.begin(),vec1.end(),back_inserter( vec2) );
	printvec(vec2);
	int tmp;
	cin >> tmp;
    return 0;
}

