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
		for (int i = 0; i < _Size; i++)
		{
			cout << Array[i] << " ";
		}
		cout << "\n";
	}

	int Size() {
		return _Size;
	}

	bool IsEmpty() {
		return _Size == 0;
	}

	bool SetItem(int index, EnteredType value) {
		if (index < 0 || index >= _Size)
		{
			return false;
		}

		Array[index] = value;
		return true;
	}

	bool Resize(int newSize) {
		if (newSize == _Size || newSize < 1)
		{
			return false;
		}

		else if (newSize > _Size)
		{
			int counter = newSize - _Size;
			while (counter != 0)
			{
				Array[_Size + counter];
				counter--;
			}
			_Size = newSize;
			return true;
		}

		else if (newSize < _Size)
		{
			int counter = _Size - newSize;
			while (counter != 0)
			{
				EnteredType* current;
				current = Array[_Size + counter];
				delete current;
				counter--;
			}
			_Size = newSize;
			return true;
		}
	}
};

