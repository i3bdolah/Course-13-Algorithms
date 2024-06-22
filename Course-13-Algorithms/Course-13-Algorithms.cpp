#include <iostream>
#include "clsMyStackArr.h"

using namespace std;

int main()
{
	clsMyStackArr <int> MyStackArr;

	MyStackArr.Push(10);
	MyStackArr.Print();
	MyStackArr.Push(20);
	MyStackArr.Print();
	MyStackArr.Push(30);
	MyStackArr.Print();
	MyStackArr.Push(40);
	MyStackArr.Print();
	MyStackArr.Push(50);
	MyStackArr.Print();

	cout << "Stack Size  : " << MyStackArr.Size() << endl;
	cout << "Stack Top : " << MyStackArr.Top() << endl;
	cout << "Stack Bottom  : " << MyStackArr.Bottom() << endl;

	MyStackArr.Pop();
	cout << "\nAfter Pop() : ";
	MyStackArr.Print();
	cout << "\n";


	cout << "Stack Size  : " << MyStackArr.Size() << endl;
	cout << "Stack Top : " << MyStackArr.Top() << endl;
	cout << "Stack Bottom  : " << MyStackArr.Bottom() << endl;


	// Extension #1
	cout << "GetItem(2) : " << endl;
	cout << MyStackArr.GetItem(2) << endl;

	// Extension #2
	MyStackArr.Reverse();
	cout << "After Reverse : ";
	MyStackArr.Print();
	cout << "\n";

	// Extension #3
	MyStackArr.UpdateItem(2, 600);
	cout << "After UpdateItem(2,600) : ";
	MyStackArr.Print();
	cout << "\n";

	// Extension #4
	MyStackArr.InsertAfter(2, 800);
	cout << "After InsertAfter(2, 800) : ";
	MyStackArr.Print();
	cout << "\n";

	// Extension #5
	MyStackArr.InsertAtFront(1000);
	cout << "After InsertAtFront(1000) : ";
	MyStackArr.Print();
	cout << "\n";

	// Extension #6
	MyStackArr.InsertAtBack(2000);
	cout << "After InsertAtBack(2000) : ";
	MyStackArr.Print();
	cout << "\n";

	// Extension #7
	MyStackArr.Clear();
	cout << "After Clear() : ";
	MyStackArr.Print();
	cout << "\n";
	cout << "Is Empty (True or False) : " << MyStackArr.IsEmpty();


	cout << "\n\n";
}