#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <functional>

using namespace std;

template<class T>
void print(T tmp) {
	cout << tmp << "  ";
};

template<class T>
class printx : public unary_function<T, void> {
public:
	void operator()(T& x){
		cout << x << endl;
	};
};

template<class T>
class add : public unary_function<T, void> {
public:
	void operator()(T& x) {
		x += 10;
	}
};

template<class T>
class multi : public unary_function<T, void> {
public:
	void operator()(T& x) {
		x *= 3;
	}
};

template <class T>
class Add2 : public binary_function<T, T, void> {
public:
	void operator()( T x,  T y) const {
		//x += y;
		cout << x << "*" << y << endl;
	}
};

template<class T>
void printvec(T& tmp) {
	for_each(tmp.begin(),tmp.end(),printx<int>());
	//typedef T::iterator iterxx;
	//for (iterxx iter = T.begin(); iter != T.end(); iter++) {
	//	cout << *iter << endl;
	//}
};

void pri2(int x,int y) {
	cout << x << "--------  " << y << "  ";
}
class Shape {
public:
	virtual void x() = 0;
};
class ShapeA : public Shape {
public :
	virtual void x() {
		cout << "shapea" << endl;
	}
};

int main()
{
	ShapeA a;
	a.x();
	vector<ShapeA> shv(10,a);
	for_each(shv.begin(), shv.end(),mem_fun_ref( &ShapeA::x));
	//for_each(shv.begin(),shv.end(),mem_fun());


	vector<int> vec;
	back_insert_iterator<vector<int>> x = back_inserter(vec);
	ostream_iterator<int> out(cout,"---");
	ostream_iterator<char  *> sout(cout, "**");
	//auto x = back_insert_iterator(vec);
	//auto y=  back_insert_iterator(vec);
	back_insert_iterator<vector<int>> xx(vec);
	for (int i = 0; i < 10; i++) {
		xx = i;
		x = i;
		out=i;
		sout = "yjf";
	}
	cout << endl;
	add<int> addtmp;
	multi<int> multmp;
	Add2<int> add2;
	add2(123,234);

	pointer_to_binary_function<int,int,void> p2(pri2);
	p2(12222, 2222);
	binder1st<Add2<int>> bin(add2,30);
	for_each(vec.begin(),vec.end(),bind1st(ptr_fun(pri2),333));
	copy(vec.begin(),vec.end(),out);
	//for_each(vec.begin(),vec.end(),printx<int>());
	//printvec(vec);
	//for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++) {
	//	cout << *iter << endl;
	//}
	//printvec(vec);
	int tmp;
	cin >> tmp;
	return 0;
}