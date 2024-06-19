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

	cout << "GetItem(2) : " << MyDynamicArray.GetItem(2);

	cout << "\n\nAfter Reverse() : ";
	MyDynamicArray.Reverse();
	MyDynamicArray.PrintList();

	cout << "\n\nAfter Clear() : ";
	MyDynamicArray.Clear();
	MyDynamicArray.PrintList();

	cout << "\n\nAfter Resize(3) : ";
	MyDynamicArray.Resize(3);
	MyDynamicArray.PrintList();

	cout << "\n\n";
}