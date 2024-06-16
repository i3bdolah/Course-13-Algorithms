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

    cout << "\n\GetItem(9) : " << MyDLL.GetItem(9) << " (Returns Head)";
    cout << "\n\n";
}