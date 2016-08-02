#pragma once
class myclass
{
private:
	int x;
	int y;
public:
	myclass(int x = 0, int y = 0);
	~myclass();
	myclass operator+ (const myclass right) const;
	friend ostream&  operator<< (ostream &out,myclass right);
	friend myclass&   operator*(myclass& left, myclass& right);
	void print();
};


class myinherit :
	public myclass
{
public:
	myinherit(int x, int y);
	~myinherit();
	
};
