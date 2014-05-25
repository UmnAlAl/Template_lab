#include <iostream>
#include "bubble_sort.h"
#include "A.h"
#include "B.h"
using namespace std;

void main ()
{
	A arrA[] = {5, 7, 3, 9, 6, 5};
	B arrB[] = {"123", "12", "qwe", "feafsfadsf", "opopop", "0123456789"};
	bubble_sort<A> (arrA, 6, swapA);
	bubble_sort<B> (arrB, 6, swapB);
	for (int i = 0; i < 6; i++)
	{
		cout << arrA[i].get();
	}
	cout << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << arrB[i].get() << endl;
	}
}