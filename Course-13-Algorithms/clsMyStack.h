#pragma once
#include "clsMyQueue.h"
#include "clsDblLinkedList.h"
#include <iomanip>

using namespace std;

template <class EnteredType>
class clsMyStack : public clsMyQueue <EnteredType>
{
public:
	void Print() {
		cout << "\n";
		for (int i = 0; i < this->_MyList.Size(); i++)
		{
			cout << "|";
			cout << setw(5) << this->_MyList.GetItem(i);
			cout << "|\n";
		}
		cout << "-------";
		cout << "\n";
	}

	void Push(EnteredType value) {
		this->_MyList.InsertAtBeginning(value);
	}

	EnteredType Top() {
		return this->Front();
	}

	EnteredType Bottom() {
		return this->Back();
	}
};