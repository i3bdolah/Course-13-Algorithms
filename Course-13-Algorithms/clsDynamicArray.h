#pragma once

using namespace std;

template <class EnteredType>
class clsDynamicArray
{

protected:

	int _Size = 0;

public:

	EnteredType* Array = nullptr;

	clsDynamicArray(int length = 0) {
		if (length < 0)
		{
			length = 0;
		}
		_Size = length;
		Array = new EnteredType[length];
	}

	~clsDynamicArray() {
		delete[] Array;
	}

	void PrintList() {
		//cout << "\n";
		if (_Size == 0)
		{
			cout << "No Element found.\n";
			return;
		}

		for (int i = 0; i < _Size; i++)
		{
			cout << Array[i] << " ";
		}
		//cout << "\n";
	}

	void PrintInfo() {
		cout << "\n";
		cout << "Is Empty : " << IsEmpty();
		cout << "\nSize     : " << Size();
		cout << "\n";
	}

	int Size() {
		return _Size;
	}

	bool IsEmpty() {
		return _Size == 0;
	}

	bool SetItem(int index, EnteredType value) {
		if (index < 0 || index >= _Size) return false;

		Array[index] = value;
		return true;
	}

	bool Resize(int newSize) {
		if (newSize == _Size || newSize < 0) return false;

		EnteredType* tempArray = new EnteredType[newSize];

		// To Limit unecessary iterations
		if (newSize < _Size) _Size = newSize;

		for (int i = 0; i < _Size; i++)
		{
			tempArray[i] = Array[i];
		}

		delete[] Array;
		Array = tempArray;
		_Size = newSize;
		return true;

	}

	EnteredType GetItem(int index) {
		return Array[index];
	}

	bool Reverse() {
		if (_Size == 0) return false;

		EnteredType* tempArray = new EnteredType[_Size];
		for (int i = 0; i < _Size; i++)
		{
			tempArray[(_Size - 1) - i] = Array[i];
		}
		delete[] Array;
		Array = tempArray;
		return true;
	}

	void Clear() {
		delete[] Array;
		Array = new EnteredType[0];
		_Size = 0;
	}

	bool DeleteItemAt(int index) {
		if (index < 0 || index >= _Size) return false;

		_Size--;
		EnteredType* tempArray = new EnteredType[_Size];

		for (int i = 0; i < index; i++)
		{
			tempArray[i] = Array[i];
		}

		for (int i = index; i < _Size; i++)
		{
			tempArray[i] = Array[i + 1];
		}
		delete[] Array;
		Array = tempArray;
		return true;
	}

	bool DeleteFirstItem() {
		return DeleteItemAt(0);
	}

	bool DeleteLastItem() {
		return DeleteItemAt(_Size - 1);
	}

	int Find(EnteredType value) { // returns the Index
		for (int i = 0; i < _Size; i++)
		{
			if (Array[i] == value)
			{
				return i;
			}
		}
		return -1;
	}

	bool DeleteItem(EnteredType value) {
		return DeleteItemAt(Find(value));
	}

	bool InsertAt(int index, EnteredType value) {
		if (index < 0 || index > _Size) return false;

		_Size++;
		EnteredType* tempArray = new EnteredType[_Size];

		for (int i = 0; i < index; i++)
		{
			tempArray[i] = Array[i];
		}

		tempArray[index] = value;
		index++;

		for (int i = index; i < _Size; i++)
		{
			tempArray[i] = Array[i - 1];
		}

		delete[] Array;
		Array = tempArray;
		return true;
	}

	bool InsertAtBeginning(EnteredType value) {
		return InsertAt(0, value);
	}

	bool InsertBefore(int index, EnteredType value) {
		return index <= 0 ? InsertAtBeginning(value) : InsertAt(index - 1, value);
	}

	bool InsertAfter(int index, EnteredType value) {
		return index >= _Size ? InsertAtEnd(value) : InsertAt(index + 1, value);
	}

	bool InsertAtEnd(EnteredType value) {
		return InsertAt(_Size, value);
	}
};

