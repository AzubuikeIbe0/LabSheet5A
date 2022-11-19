#include "ListOfInts.h"
#include "NodeOfInts.h"

ListOfInts::ListOfInts()
{
	//NodeOfInt *head;
	head = nullptr;
}

void ListOfInts::insertBack(int)
{
	NodeOfInt* newNode;  // This won't change, or we would lose the list in memory
	NodeOfInt* nodePtr;	 // This will point to each node as it traverses the list

	newNode = new NodeOfInt();	// Sets it to actually point to something
	

	if (!head)
	{
		head = newNode; // The head points to the first node
	}
	else
	{
		for (nodePtr = head; nodePtr->next != nullptr; nodePtr = nodePtr->next)
			;
		nodePtr->next = newNode;
	}


	// ALTERNATIVE METHOD
	//newNode->next = 0;   //  Otherwise it would not work well
	//nodePtr->theValue = 12;

	//if (nodePtr != NULL)
	//{
	//	while (nodePtr->next != NULL)
	//	{
	//		nodePtr = nodePtr->next;
	//	}

	//	nodePtr->next = newNode;	// Creates a node at the end of the list
	//	nodePtr = nodePtr->next;	// Points to that node
	//	nodePtr->next = NULL;		// Prevents it from going any further
	//	nodePtr->theValue = 42;
	//}
		
	
}

void ListOfInts::displayList()
{
	NodeOfInt* tempPtr = head;

	if (head != NULL)
	{
		while (tempPtr != NULL)
		{
			cout << tempPtr->theValue;
			tempPtr = tempPtr->next;
		}

		cout << tempPtr->theValue;
	}
}


NodeOfInt* ListOfInts::deleteMostRecent()
{
	NodeOfInt* tempPtr = head;

	if (head == NULL)
	{
		return NULL;
	}
	else if (head != NULL)
	{
		if (head->next == NULL)
		{
			cout << head->theValue;
			delete head;
			return NULL;
		}
	}
	// Find the second last node
	while (tempPtr->next->next != NULL)
	{
		cout << tempPtr->theValue;
		tempPtr = tempPtr->next;
		delete(tempPtr->next);

		tempPtr->next = NULL;

		
	}
	return tempPtr;
}

void ListOfInts::deleteInt(int pos)
{
	if (head == NULL) // Linked list is empty
		return;

	NodeOfInt* temp = head; // Stor head node

	if (pos == 0)
	{
		head = temp->next; // Change head

		delete head; // delete head;
		return;
	}

	for (int i = 0; temp != NULL && i < pos - 1; i++) //Find previous to the node to the one
													  //being deleted
	{
		cout << temp->next->theValue;
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL) // If the position is mor than the prev nodes
	{
		return;

		NodeOfInt* next = temp->next;	// Node temp->next is the node to be deleted
		// Store pointer to the next of node to be deleted

		cout << temp->next->theValue;

		delete (temp->next);
		temp->next = nullptr;    // Unlink the node from linked list  
		// Free memory

		temp->next = next;       // Unlink the deleted node from list
	}

}

ListOfInts::~ListOfInts()
{

}