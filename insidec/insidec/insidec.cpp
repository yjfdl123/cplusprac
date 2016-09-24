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

class Point2d {
public:
	float x, y;
public:
	Point2d(float a, float b) :x(a), y(b) {
	};
	float z() {
		return 0.0;
	}
	virtual Point2d& operator+=(Point2d& rhs) {
		x += rhs.x;
		y += rhs.y;
		return *this;
	};
	virtual void print() {
		cout << x << "  " << y << endl;
	};
};


class Point3d :public Point2d{
public:
	float z;
public:
	void test() {};
	Point3d(float a, float b, float c) :Point2d(a, b), z(c) {};
	Point3d& operator+=(Point2d& rhs) {
		Point2d::operator+=(rhs);
		z += 0.0;
		return *this;
	};
	void print(Point3d& rhs) {
		cout << x << y << z << endl;
		
	}
};

class Concrete1 {
public:
	int val;
	char bit1;

};
class Concrete2 : public Concrete1 {
public:
	char bit2;
};
class Concrete3 : public Concrete2 {
public:
	char bit3;
};


int main()
{
	Point2d p2(3, 5);
	Point2d p21(1, 10);
	p2 += p21;
	p2.print();

	Point3d p3(1,2,3);
	cout << &p3 << endl;
	cout << &p3.x << endl;
	cout << &p3.y << endl;

	Concrete2 *pc2;
	Concrete1 *pc1,*pc12;

	Concrete3 c3;
	cout << sizeof(c3) << endl;
	int tmp;
	cin >> tmp;

	return 0;
}
