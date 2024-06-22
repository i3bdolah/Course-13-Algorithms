#include <iostream>
#include "clsMyQueueArr.h"

using namespace std;

int main()
{
	clsMyQueueArr <int> MyQueue;

	MyQueue.Push(10);
	MyQueue.Push(20);
	MyQueue.Push(30);
	MyQueue.Push(40);
	MyQueue.Push(50);

	MyQueue.PrintList();
	MyQueue.PrintInfo();
	cout << "\n";

	cout << "After Pop()" << endl;
	MyQueue.Pop();
	MyQueue.PrintList();
	MyQueue.PrintInfo();
	cout << "\n";


	// Extension #1
	cout << "GetItem(2) : ";
	cout << MyQueue.GetItem(2) << endl;

	// Extension #2
	MyQueue.Reverse();
	cout << "After Reverse : ";
	MyQueue.PrintList();
	cout << "\n";

	// Extension #3
	MyQueue.UpdateItem(2, 600);
	cout << "After UpdateItem(2,600) : ";
	MyQueue.PrintList();
	cout << "\n";

	// Extension #4
	MyQueue.InsertAfter(2, 800);
	cout << "After InsertAfter(2, 800) : ";
	MyQueue.PrintList();
	cout << "\n";

	// Extension #5
	MyQueue.InsertAtFront(1000);
	cout << "After InsertAtFront(1000) : ";
	MyQueue.PrintList();
	cout << "\n";

	// Extension #6
	MyQueue.InsertAtBack(2000);
	cout << "After InsertAtBack(2000) : ";
	MyQueue.PrintList();
	cout << "\n";

	// Extension #7
	MyQueue.Clear();
	cout << "After Clear() : ";
	MyQueue.PrintList();
	cout << "Is Empty (True or False) : " << MyQueue.IsEmpty();


	cout << "\n\n";
}