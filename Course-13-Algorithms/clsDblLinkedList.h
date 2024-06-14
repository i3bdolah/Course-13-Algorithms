#pragma once
#include <iostream>

using namespace std;

template <class EnteredType>
class clsDblLinkedList
{
public:
	class Node {
	public:
		EnteredType value;
		Node* prev;
		Node* next;
	};

	Node* head = NULL;

	void PrintDoublyLinkedList() {
		cout << "\n";
		cout << "NULL <--> ";
		Node* CurrentNode = head;
		while (CurrentNode != NULL)
		{
			cout << CurrentNode->value << " <--> ";
			CurrentNode = CurrentNode->next;
		}
		cout << "NULL";
		cout << "\n";
		delete CurrentNode;
	}

	void PrintDoublyNode() {
		cout << "\n";
		Node* CurrentNode = head;
		while (CurrentNode != NULL)
		{
			if (CurrentNode->prev == NULL)
				cout << "NULL";
			else
				cout << CurrentNode->prev->value << "   ";

			cout << " <--> " << CurrentNode->value << " <--> ";

			if (CurrentNode->next == NULL)
				cout << "NULL";
			else
				cout << CurrentNode->next->value << "   " << endl;

			CurrentNode = CurrentNode->next;
		}
		cout << "\n";
		delete CurrentNode;
	}

	void PrintList() {
		cout << "\n";
		Node* CurrentNode = head;
		while (CurrentNode != NULL)
		{
			cout << CurrentNode->value << " ";
			CurrentNode = CurrentNode->next;
		}
		cout << "\n";
		delete CurrentNode;
	}

	// -----------------------------------

	Node* Find(EnteredType value) {
		Node* CurrentNode = head;
		while (CurrentNode != NULL)
		{
			if (CurrentNode->value == value)
				return CurrentNode;

			CurrentNode = CurrentNode->next;
		}

		return NULL;
	}

	void InsertAtBeginning(EnteredType value) {
		Node* NewNode = new Node();

		NewNode->prev = NULL;
		NewNode->value = value;
		NewNode->next = head;

		if (head != NULL)
		{
			head->prev = NewNode;
		}
		head = NewNode;
	}

	void InsertAtEnd(EnteredType value) {
		Node* NewNode = new Node();

		NewNode->value = value;
		NewNode->next = NULL;
		if (head == NULL)
		{
			NewNode->prev = NULL;
			head = NewNode;
			return;
		}
		else
		{
			Node* LastNode = head; // To prevent changes in the head
			while (LastNode->next != NULL)
			{
				LastNode = LastNode->next;
			}
			LastNode->next = NewNode;
			NewNode->prev = LastNode;
		}
	}

	void InsertAfter(Node*& PrevNode, EnteredType NewNodeValue) {
		Node* NewNode = new Node();

		NewNode->prev = PrevNode;
		NewNode->value = NewNodeValue;
		NewNode->next = PrevNode->next;

		if (PrevNode->next != NULL)
		{
			PrevNode->next->prev = NewNode;
		}
		PrevNode->next = NewNode;
	}

	void DeleteNode(Node*& NodeToDelete) {

		if (head == NULL || NodeToDelete == NULL) return;

		if (head == NodeToDelete) {
			head = NodeToDelete->next;
		}

		if (NodeToDelete->prev != NULL)
		{
			NodeToDelete->prev->next = NodeToDelete->next;
		}

		if (NodeToDelete->next != NULL)
		{
			NodeToDelete->next->prev = NodeToDelete->prev;
		}

		delete NodeToDelete;
	}

	void DeleteFirstNode() {

		if (head == NULL) return;

		Node* Temp = head;
		head = head->next;
		if (head != NULL)
		{
			head->prev = NULL;
		}
		delete Temp;
	}

	void DeleteLastNode() {

		if (head == NULL) return;

		if (head->next == NULL)
		{
			delete head;
			head = NULL;
			return;
		}

		Node* LastNode = head;
		while (LastNode->next->next != NULL)
		{
			LastNode = LastNode->next;
		}

		Node* Temp = LastNode->next;
		LastNode->next = NULL;
		delete Temp;
	}
};

