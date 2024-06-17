#include <iostream>
#include "clsMyStack.h"

using namespace std;

int main()
{
	clsMyStack <int> MyStack;

	MyStack.Push(10);
	MyStack.Print();
	MyStack.Push(20);
	MyStack.Print();
	MyStack.Push(30);
	MyStack.Print();
	MyStack.Push(40);
	MyStack.Print();
	MyStack.Push(50);
	MyStack.Print();

	cout << "Stack Size  : " << MyStack.Size() << endl;
	cout << "Stack Top : " << MyStack.Top() << endl;
	cout << "Stack Bottom  : " << MyStack.Bottom() << endl;

	MyStack.Pop();
	cout << "\nAfter Pop() : ";
	MyStack.Print();
	cout << "\n";


	cout << "Stack Size  : " << MyStack.Size() << endl;
	cout << "Stack Top : " << MyStack.Top() << endl;
	cout << "Stack Bottom  : " << MyStack.Bottom() << endl;


	// Extension #1
	cout << "GetItem(2) : " << endl;
	cout << MyStack.GetItem(2) << endl;

	// Extension #2
	MyStack.Reverse();
	cout << "After Reverse : ";
	MyStack.Print();
	cout << "\n";

	// Extension #3
	MyStack.UpdateItem(2, 600);
	cout << "After UpdateItem(2,600) : ";
	MyStack.Print();
	cout << "\n";

	// Extension #4
	MyStack.InsertAfter(2, 800);
	cout << "After InsertAfter(2, 800) : ";
	MyStack.Print();
	cout << "\n";

	// Extension #5
	MyStack.InsertAtFront(1000);
	cout << "After InsertAtFront(1000) : ";
	MyStack.Print();
	cout << "\n";

	// Extension #6
	MyStack.InsertAtBack(2000);
	cout << "After InsertAtBack(2000) : ";
	MyStack.Print();
	cout << "\n";

	// Extension #7
	MyStack.Clear();
	cout << "After Clear() : ";
	MyStack.Print();
	cout << "\n";
	cout << "Is Empty (True or False) : " << MyStack.IsEmpty();


	cout << "\n\n";
}