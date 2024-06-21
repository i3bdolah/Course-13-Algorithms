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


	cout << "\n\nAfter DeleteFirstItem() : ";
	MyDynamicArray.DeleteFirstItem();
	MyDynamicArray.PrintList();
	MyDynamicArray.PrintInfo();

	cout << "\n\nAfter DeleteLastItem() : ";
	MyDynamicArray.DeleteLastItem();
	MyDynamicArray.PrintList();
	MyDynamicArray.PrintInfo();

	cout << "\n\n";
}