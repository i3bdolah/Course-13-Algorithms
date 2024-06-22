#pragma once
#include "clsDynamicArray.h"

using namespace std;

template <class EnteredType>
class clsMyQueueArr
{
protected:

	clsDynamicArray <EnteredType> _MyArr;

public:

	void PrintList() {
		_MyArr.PrintList();
	}

	void PrintInfo() {
		_MyArr.PrintInfo();
	}

	// ------------------------

	void Push(EnteredType value) {
		_MyArr.InsertAtEnd(value);
	}

	void Pop() {
		_MyArr.DeleteFirstItem();
	}

	int Size() {
		return _MyArr.Size();
	}

	bool IsEmpty() {
		return _MyArr.IsEmpty();
	}

	EnteredType Front() {
		return _MyArr.GetItem(0);
	}

	EnteredType Back() {
		return _MyArr.GetItem(Size() - 1);
	}

	EnteredType GetItem(int index) {
		return _MyArr.GetItem(index);
	}

	void Reverse() {
		_MyArr.Reverse();
	}

	void UpdateItem(int index, EnteredType value) {
		_MyArr.SetItem(index, value);
	}

	void InsertAfter(int index, EnteredType value) {
		_MyArr.InsertAfter(index, value);
	}

	void InsertAtFront(EnteredType value) {
		_MyArr.InsertAtBeginning(value);
	}

	void InsertAtBack(EnteredType value) {
		_MyArr.InsertAtEnd(value);
	}

	void Clear() {
		_MyArr.Clear();
	}

};

