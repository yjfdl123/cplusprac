#include <stdio.h>
#include <iostream>
using namespace std;
class X{
public:
	int i;
};

class A : public virtual X{
public:
	int j;
};

class B : public virtual X{
public:
	int k;
};

class Y : public A, public B{
public:
	int h;
};

void foo(A*pa){
	pa->i = 1023;
};



void main(){
	foo(new A);
	int tmp;
	cin >> tmp;
}