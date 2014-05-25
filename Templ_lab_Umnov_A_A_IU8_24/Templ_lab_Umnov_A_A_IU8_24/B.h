/**
Here you can see classB realisation
*/
#pragma once
#include <string>
using namespace std;
class B
{
	string str;
public:
	B(){};
	B(string _str) : str(_str) {};
	friend bool swapB (B& str1, B& str2);
	string get() {return str;}
};

/**
Strings are sorted according their length.
*/
bool swapB (B& str1, B& str2)
{
	if ( str1.str.length() > str2.str.length() )
	{
		str1.str.swap(str2.str);
		return true;
	}
	return false;
}