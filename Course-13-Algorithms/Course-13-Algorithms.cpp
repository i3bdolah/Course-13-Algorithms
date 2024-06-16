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


    MyDLL.InsertAfter(2, 500);
    cout << "InsertAfter index (2) of value (3) by (500)";


    MyDLL.PrintList();
    cout << "\n\n";

}