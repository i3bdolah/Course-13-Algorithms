#pragma once
#include "clsDblLinkedList.h"

using namespace std;

template <class EnteredType>
class clsMyQueue
{
protected:

	clsDblLinkedList <EnteredType> _MyList;

public:

	void Print() {
		_MyList.PrintList();
	}

	// -----------------------------------

	void Push(EnteredType value) {
		_MyList.InsertAtEnd(value);
	}

	void Pop() {
		_MyList.DeleteFirstNode();
	}

	int Size() {
		return _MyList.Size();
	}

	bool IsEmpty() {
		return _MyList.IsEmpty();
	}

	EnteredType Front() {
		return _MyList.GetItem(0);
	}

	EnteredType Back() {
		return _MyList.GetItem(Size() - 1);
	}

	// Extension #1
	EnteredType GetItem(int index) {
		return _MyList.GetItem(index);
	}

	// Extension #2
	void Reverse() {
		_MyList.Reverse();
	}

	// Extension #3
	void UpdateItem(int index, EnteredType value) {
		_MyList.UpdateItem(index, value);
	}

	// Extension #4
	void InsertAfter(int index, EnteredType value) {
		_MyList.InsertAfter(index, value);
	}

	// Extension #5
	void InsertAtFront(EnteredType value) {
		_MyList.InsertAtBeginning(value);
	}

	// Extension #6
	void InsertAtBack(EnteredType value) {
		_MyList.InsertAtEnd(value);
	}

	// Extension #7
	void Clear() {
		_MyList.Clear();
	}

};

