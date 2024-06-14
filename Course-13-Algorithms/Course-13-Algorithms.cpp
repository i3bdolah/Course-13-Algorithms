#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList <int> MyDLL;

    if (MyDLL.IsEmpty())
    {
        cout << "\nYes, Linked List is Empty.\n\n";
    }
    else
    {
        cout << "\nNo, Linked List is NOT Empty.\n\n";
    }

    MyDLL.InsertAtEnd(1);
    MyDLL.InsertAtEnd(2);
    MyDLL.InsertAtEnd(3);
    MyDLL.InsertAtEnd(4);
    MyDLL.InsertAtEnd(5);

    cout << "Linked List Content : ";
    MyDLL.PrintList();

    if (MyDLL.IsEmpty())
    {
        cout << "\nYes, Linked List is Empty.\n\n";
    }
    else
    {
        cout << "\nNo, Linked List is NOT Empty.\n\n";
    }
}