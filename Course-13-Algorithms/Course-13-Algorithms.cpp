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
	MyDynamicArray.PrintInfo();

	cout << "_________________________________\n\n";


	int index = MyDynamicArray.Find(50);
	cout << "\n\nFind(50) return value is : " << index;

	MyDynamicArray.DeleteItem(50);
	cout << "\n\nAfter DeleteItem(50) : ";
	MyDynamicArray.PrintList();
	MyDynamicArray.PrintInfo();

	cout << "\n\n";
}