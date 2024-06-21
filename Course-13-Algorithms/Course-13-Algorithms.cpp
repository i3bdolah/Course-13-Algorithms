#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{
	clsDynamicArray <int> MyDynamicArray(5);

	MyDynamicArray.SetItem(0, 10);
	MyDynamicArray.SetItem(1, 20);
	MyDynamicArray.SetItem(2, 30);
	MyDynamicArray.SetItem(3, 40);
	MyDynamicArray.SetItem(4, 50);
	MyDynamicArray.PrintList();
	MyDynamicArray.PrintInfo();

	cout << "\n\nAfter Insert 400 At Beginning : ";
	cout << MyDynamicArray.InsertAtBeginning(400) << endl;
	MyDynamicArray.PrintList();
	MyDynamicArray.PrintInfo();

	cout << "\n\nAfter Insert 500 Before index 2 : ";
	cout << MyDynamicArray.InsertBefore(2,500) << endl;
	MyDynamicArray.PrintList();
	MyDynamicArray.PrintInfo();

	cout << "\n\nAfter Insert 600 After index 10 : ";
	cout << MyDynamicArray.InsertAfter(10, 600) << endl;
	MyDynamicArray.PrintList();
	MyDynamicArray.PrintInfo();

	cout << "\n\nAfter Insert 800 At End : ";
	cout << MyDynamicArray.InsertAtEnd(800) << endl;
	MyDynamicArray.PrintList();
	MyDynamicArray.PrintInfo();

	cout << "\n\n";
}