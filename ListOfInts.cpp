#include "ListOfInts.h"
#include "NodeOfInts.h"

ListOfInts::ListOfInts()
{
	head = nullptr;
}
void ListOfInts::insertBack(int)
{
	NodeOfInt* newNode = new NodeOfInt();
	NodeOfInt* nodePtr;

	if (!head)
	{
		head = newNode;
	}
	else
	{
		for (nodePtr = head; nodePtr->next != nullptr; nodePtr = nodePtr->next)
			;
		nodePtr->next = newNode;
	}
		
	
}
void ListOfInts::displayList()
{
	ListOfInts tempPtr = head; 

	while (tempPtr != NULL)
	{
		cout << tempPtr->theValue;
		tempPtr = tempPtr->next;
	}
}
void ListOfInts::deleteMostRecent()
{

}
void ListOfInts::deleteInt(int pos)
{

}
ListOfInts::~ListOfInts()
{

}