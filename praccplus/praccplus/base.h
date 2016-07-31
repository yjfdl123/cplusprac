#pragma once
using namespace std;

template<typename T>
void printT(T in)
{
	for (auto item : in)
	{
		cout << item << endl;
	}
}

class base
{
public:
	base();
	~base();

	template<typename T>
	void base::printT(T in)
	{
		for (auto item : in)
		{
			cout << item << endl;
		}
	}
};
