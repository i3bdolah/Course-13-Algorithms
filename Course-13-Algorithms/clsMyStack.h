#pragma once
#include "clsMyQueue.h"

using namespace std;

template <class EnteredType>
class clsMyStack : public clsMyQueue <EnteredType>
{
public:
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

