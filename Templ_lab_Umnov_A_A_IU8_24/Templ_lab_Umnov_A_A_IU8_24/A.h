/**
Here you can see classA realisation
*/
#pragma once

class A
{
	int a;
public:
	A() : a(0) {};
	A(int _a) : a(_a) {};
	friend bool swapA (A& a1, A& a2);
	int get() {return a;}
};

bool swapA (A& a1, A& a2)
{
	if ( a1.a > a2.a )
	{
		int tmp = a1.a;
		a1.a = a2.a;
		a2.a = tmp;
		return true;
	}
	return false;
}