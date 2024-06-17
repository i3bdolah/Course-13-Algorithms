#pragma once

using namespace std;

template <class EnteredType>
class clsMyQueue
{
private:
	class Node;
	Node* _front = NULL;
	Node* _back = NULL;

protected:

	int _Size = 0;

public:

	class Node {
	public:
		int value;
		Node* next;
	};


	void Print() {
		cout << "\n";
		Node* CurrentNode = _front;
		while (CurrentNode != NULL)
		{
			cout << CurrentNode->value << " ";
			CurrentNode = CurrentNode->next;
		}
		cout << "\n";
	}

	// -----------------------------------

	void Push(EnteredType value) {
		Node* NewNode = new Node();

		NewNode->value = value;
		NewNode->next = NULL;

		if (_front == NULL)
		{
			_front = NewNode;
			_back = NewNode;
		}
		else
		{
			_back->next = NewNode;
			_back = NewNode;
		}
		_Size++;
	}

	void Pop() {
		Node* TempNode = _front->next;
		delete _front;
		_front = TempNode;
	}

	int Size() {
		return _Size;
	}

	EnteredType Front() {
		return _front->value;
	}

	EnteredType Back() {
		return _back->value;
	}
};

