#include "stdafx.h"
#include <set>
#include <functional>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Point3d{
public:
	float x, y, z;
	static const int t=100;
	
public:
	//Point3d();

	float X(){
		return x;
	}
};

class A{
public:
	static const int x = 100;
	//A();
};
class B :public virtual A
{};
class C :public virtual A
{};
class D :public  B, public C
{};

class E : public  A{
	};
int _tmain(int argc, _TCHAR* argv[])
{
	Point3d p3d, *pt = &p3d;
	//Point3d::t = 123;
	cout << Point3d::t << endl;
	cout << &Point3d::t << endl;
	cout << &(pt->t) << endl;

	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;
	cout << sizeof(C) << endl;
	cout << sizeof(D) << endl;
	cout << sizeof(E) << endl;
	int tmp;
	cin >> tmp;
	return 0;
}