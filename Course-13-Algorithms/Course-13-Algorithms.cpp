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

    MyQueue.Pop();

    MyQueue.Print();

    cout << "Queue Size  : " << MyQueue.Size() << endl;
    cout << "Queue Front : " << MyQueue.Front() << endl;
    cout << "Queue Back  : " << MyQueue.Back() << endl;

    cout << "\n\n";

}