#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{
	clsDynamicArray <int> MyDynamicArray(5);
	MyDynamicArray.PrintList();

	MyDynamicArray.SetItem(0, 10);
	MyDynamicArray.SetItem(1, 20);
	MyDynamicArray.SetItem(2, 30);
	MyDynamicArray.SetItem(3, 40);
	MyDynamicArray.SetItem(4, 50);
	MyDynamicArray.PrintList();

	MyDynamicArray.Resize(2);

	MyDynamicArray.PrintList();
	cout << "\nIs Empty    : " << MyDynamicArray.IsEmpty() << endl;
	cout << "\nSize      : " << MyDynamicArray.Size() << endl;

	cout << "\n\n";
}