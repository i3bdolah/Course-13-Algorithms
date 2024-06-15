#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList <int> MyDLL;
    MyDLL.InsertAtEnd(1);
    MyDLL.InsertAtEnd(2);
    MyDLL.InsertAtEnd(3);
    MyDLL.InsertAtEnd(4);
    MyDLL.InsertAtEnd(5);

    cout << "\n\nBefore .Reverse() : \n\n";
    MyDLL.PrintDoublyNode();
    MyDLL.PrintList();

    MyDLL.Reverse();

    cout << "\n\nAfter .Reverse() : \n\n";
    MyDLL.PrintDoublyNode();
    MyDLL.PrintList();

    cout << "\n\n";
}