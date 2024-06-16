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

    cout << "\n\GetItem(2) : " << MyDLL.GetItem(2);
    cout << "\n\n";

    MyDLL.UpdateItem(2, 500);
    cout << "Updating index (2) of value (3) to (500)";

    cout << "\n\nUpdateItem(2) : " << MyDLL.GetItem(2);
    cout << "\n\n";


    MyDLL.PrintList();
    cout << "\n\n";

}