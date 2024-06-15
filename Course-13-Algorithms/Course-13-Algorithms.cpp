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

    MyDLL.PrintList();

    cout << "\n\nBefore .Clear() : \n\n";
    cout << "Size is : " << MyDLL.Size();

    cout << "\n\nAfter .Clear() : \n\n";
    MyDLL.Clear();

    cout << "Size is : " << MyDLL.Size();
}