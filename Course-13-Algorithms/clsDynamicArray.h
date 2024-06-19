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
		cout << "\n";
		if (_Size == 0)
		{
			cout << "No Element found.\n";
			return;
		}

		for (int i = 0; i < _Size; i++)
		{
			cout << Array[i] << " ";
		}
		cout << "\n";
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

		EnteredType* tempArr = new EnteredType[newSize];

		// To Limit unecessary iterations
		if (newSize < _Size) _Size = newSize;

		for (int i = 0; i < _Size; i++)
		{
			tempArr[i] = Array[i];
		}

		delete[] Array;
		Array = tempArr;
		_Size = newSize;
		return true;

	}

	EnteredType GetItem(int index) {
		return Array[index];
	}

	bool Reverse() {
		if (_Size == 0) return false;

		EnteredType* tempArr = new EnteredType[_Size];
		for (int i = 0; i < _Size; i++)
		{
			tempArr[(_Size - 1) - i] = Array[i];
		}
		delete[] Array;
		Array = tempArr;
		return true;
	}

	void Clear() {
		delete[] Array;
		Array = new EnteredType[0];
		_Size = 0;
	}

	bool DeleteItemAt(int index) {
		if (index < 0 || index >= _Size) return false;

		EnteredType* tempArr = new EnteredType[_Size - 1];
		for (int i = 0; i < _Size; i++)
		{
			if (i >= index) {
				tempArr[i] = Array[i + 1];
			}
			else
			{
				tempArr[i] = Array[i];
			}
		}
		delete[] Array;
		Array = tempArr;
		_Size--;
		return true;
	}
};

