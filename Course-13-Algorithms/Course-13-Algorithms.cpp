#include <iostream>
#include "clsUndoRedoProject.h"

using namespace std;

int main()
{
	clsUndoRedoProject <string> MyString;
	cout << "String value : " << MyString.Value << endl;

	MyString.Value = "Abdullah 1";
	cout << "String value : " << MyString.Value << endl;

	MyString.Value = "Abdullah 2";
	cout << "String value : " << MyString.Value << endl;

	MyString.Value = "Abdullah 3";
	cout << "String value : " << MyString.Value << endl;

	cout << "\n\n";
	cout << "Undo Stack = ";
	MyString.PrintUndo();
	cout << "\n\n";

	cout << "Undo 1 :";
	MyString.Undo();
	cout << MyString.Value << endl;

	cout << "Undo 2 :";
	MyString.Undo();
	cout << MyString.Value << endl;
	
	cout << "Undo 3 :";
	MyString.Undo();
	cout << MyString.Value << endl;

	cout << "\n\n";
	cout << "Redo Stack = ";
	MyString.PrintRedo();
	cout << "\n\n";

	cout << "Redo 1 :";
	MyString.Redo();
	cout << MyString.Value << endl;

	cout << "Redo 2 :";
	MyString.Redo();
	cout << MyString.Value << endl;

	cout << "Redo 3 :";
	MyString.Redo();
	cout << MyString.Value << endl;

	cout << "\n\n";
}