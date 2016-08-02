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
	virtual void  printself();
};


class myinherit :
	public myclass
{
private:
	int z;
public:
	myinherit(int x, int y,int z);
	~myinherit();
	void print();
	void printinherit();
	virtual void  printself();
};
