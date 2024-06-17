#pragma once
#include "clsDblLinkedList.h"

using namespace std;

template <class EnteredType>
class clsMyQueue
{
protected:

	clsDblLinkedList <EnteredType> MyList;

public:

	void Print() {
		MyList.PrintList();
	}

	// -----------------------------------

	void Push(EnteredType value) {
		MyList.InsertAtEnd(value);
	}

	void Pop() {
		MyList.DeleteFirstNode();
	}

	int Size() {
		return MyList.Size();
	}

	bool IsEmpty() {
		return MyList.IsEmpty();
	}

	EnteredType Front() {
		return MyList.GetItem(0);
	}

	EnteredType Back() {
		return MyList.GetItem(Size() - 1);
	}
};

