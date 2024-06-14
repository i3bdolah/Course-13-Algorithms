#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList <int> MyDLL;

    MyDLL.InsertAtEnd(2);
    MyDLL.InsertAtEnd(3);
    MyDLL.InsertAtEnd(4);
    MyDLL.InsertAtEnd(5);
    MyDLL.InsertAtEnd(6);
    MyDLL.InsertAtBeginning(1);

    cout << "Linked List Content : ";
    MyDLL.PrintList();

    cout << "\nLinked List Size : " << MyDLL.Size();
}