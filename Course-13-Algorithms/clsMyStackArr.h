#pragma once
#include "clsMyQueueArr.h"
#include "clsDynamicArray.h"
#include <iomanip> // for setw();

using namespace std;

template <class EnteredType>
class clsMyStackArr : public clsMyQueueArr <EnteredType>
{
public:
	void Print() {
		cout << "\n";
		for (int i = 0; i < this->_MyArr.Size(); i++)
		{
			cout << "|";
			cout << setw(5) << this->_MyArr.GetItem(i);
			cout << "|\n";
		}
		cout << "-------";
		cout << "\n";
	}

	void Push(EnteredType value) {
		this->_MyArr.InsertAtBeginning(value);
	}

	EnteredType Top() {
		return this->Front();
	}

	EnteredType Bottom() {
		return this->Back();
	}
};

