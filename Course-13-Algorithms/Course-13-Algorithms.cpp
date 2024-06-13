#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList <int> MyDLL;

    MyDLL.InsertAtEnd(2);
    MyDLL.InsertAtEnd(3);
    MyDLL.InsertAtBeginning(1);

    MyDLL.PrintDoublyLinkedList();

    clsDblLinkedList<int>::Node* N1 = MyDLL.Find(2);

    if (N1 != NULL)
    {
        cout << "\nValue (2) Exist :)\n";
    }  
    else
    {
        cout << "\nValue (2) NOT Exist :(\n";
    }

    MyDLL.InsertAfter(N1, 500);
    cout << "\nAfter Inserting 500 after 2 : \n";
    MyDLL.PrintDoublyLinkedList();


}