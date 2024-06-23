#pragma once
#include "clsMyStackArr.h"

using namespace std;

template <class EnteredType>
class clsUndoRedoProject
{
private:

	clsMyStackArr <EnteredType> _UndoStack;
	clsMyStackArr <EnteredType> _RedoStack;
	EnteredType _Value;


public:

	//clsUndoRedoProject() {
	//	_Value = "";
	//}

	void SetValue(EnteredType newValue) {
		_UndoStack.Push(this->_Value);
		this->_Value = newValue;
	}

	string GetValue() {
		return _Value;
	}

	__declspec(property(get = GetValue, put = SetValue)) string Value;

	void PrintUndo() {
		_UndoStack.Print();
	}

	void PrintRedo() {
		_RedoStack.Print();
	}

	void Undo() {
		if (!_UndoStack.IsEmpty())
		{
			_RedoStack.Push(this->_Value);
			this->_Value = _UndoStack.Top();
			_UndoStack.Pop();
		}
	}

	void Redo() {
		if (!_UndoStack.IsEmpty())
		{
			_UndoStack.Push(this->_Value);
			this->_Value = _RedoStack.Top();
			_RedoStack.Pop();
		}
	}

};

