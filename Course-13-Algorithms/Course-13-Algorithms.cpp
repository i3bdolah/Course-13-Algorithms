#include <iostream>
#include "clsMyQueue.h"

using namespace std;

int main()
{
	clsMyQueue <int> MyQueue;

	MyQueue.Push(10);
	MyQueue.Push(20);
	MyQueue.Push(30);
	MyQueue.Push(40);
	MyQueue.Push(50);

	MyQueue.Print();
	cout << "Queue Size  : " << MyQueue.Size() << endl;
	cout << "Queue Front : " << MyQueue.Front() << endl;
	cout << "Queue Back  : " << MyQueue.Back() << endl;

	MyQueue.Pop();

	MyQueue.Print();

	cout << "Queue Size  : " << MyQueue.Size() << endl;
	cout << "Queue Front : " << MyQueue.Front() << endl;
	cout << "Queue Back  : " << MyQueue.Back() << endl;


	// Extension #1
	cout << "GetItem(2) : " << endl;
	cout << MyQueue.GetItem(2) << endl;

	// Extension #2
	MyQueue.Reverse();
	cout << "After Reverse : ";
	MyQueue.Print();
	cout << "\n";

	// Extension #3
	MyQueue.UpdateItem(2, 600);
	cout << "After UpdateItem(2,600) : ";
	MyQueue.Print();
	cout << "\n";

	// Extension #4
	MyQueue.InsertAfter(2, 800);
	cout << "After InsertAfter(2, 800) : ";
	MyQueue.Print();
	cout << "\n";

	// Extension #5
	MyQueue.InsertAtFront(1000);
	cout << "After InsertAtFront(1000) : ";
	MyQueue.Print();
	cout << "\n";

	// Extension #6
	MyQueue.InsertAtBack(2000);
	cout << "After InsertAtBack(2000) : ";
	MyQueue.Print();
	cout << "\n";

	// Extension #7
	MyQueue.Clear();
	cout << "After Clear() : ";
	MyQueue.Print();
	cout << "\n";
	cout << "Is Empty (True or False) : " << MyQueue.IsEmpty();


	cout << "\n\n";

}