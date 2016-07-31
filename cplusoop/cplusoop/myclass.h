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
	void  operator<< (const myclass right);
	void print();
};

