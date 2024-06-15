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

    clsDblLinkedList <int>::Node* MyNode = MyDLL.GetNode(2);
    cout << "\n\nGetNode(2) : " << MyNode->value;

    MyNode = MyDLL.GetNode(9);
    cout << "\n\nGetNode(9) : " << MyNode->value << " (Returns Head)";
    cout << "\n\n";
}