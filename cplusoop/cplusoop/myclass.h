#pragma once
class myclass
{
private:
	int x;
	int y;
public:
	myclass();
	myclass(int x = 0, int y = 0);
	~myclass();
	myclass operator+ (const myclass right) const;
	friend ostream&  operator<< (ostream &out,myclass right);
	void print();
};

