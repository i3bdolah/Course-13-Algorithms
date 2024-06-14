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
    MyDLL.InsertAtBeginning(1);

    cout << "Linked List Content : ";
    MyDLL.PrintList();

    clsDblLinkedList<int>::Node* N1 = MyDLL.Find(2);

    if (N1 != NULL)
    {
        cout << "\nValue (2) Exist :)\n\n";
    }  
    else
    {
        cout << "\nValue (2) NOT Exist :(\n\n";
    }

    MyDLL.InsertAfter(N1, 500);
    cout << "After Inserting 500 after 2 : ";
    MyDLL.PrintList();

    MyDLL.InsertAtEnd(700);
    cout << "\nAfter Inserting 700 at end : ";
    MyDLL.PrintList();

    clsDblLinkedList<int>::Node* N2 = MyDLL.Find(4);
    MyDLL.DeleteNode(N2);
    cout << "\nAfter Deleting 4 : ";
    MyDLL.PrintList();

    MyDLL.DeleteFirstNode();
    cout << "\nAfter Deleting First Node : ";
    MyDLL.PrintList();

    MyDLL.DeleteLastNode();
    cout << "\nAfter Deleting Last Node : ";
    MyDLL.PrintList();
}