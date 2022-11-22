#include "ListOfInts.h"
#include "NodeOfInts.h"

ListOfInts::ListOfInts()
{
	head = nullptr;

}


void ListOfInts::insertBack(int delData)
{
	NodeOfInt *newNode = new NodeOfInt();  // This won't change, or we would lose the list in memory
	NodeOfInt *nodePtr = head;	 // This will point to each node as it traverses the list

	// Sets it to actually point to something
	newNode->next = nullptr;
	newNode->theValue = delData;

	if (head != nullptr)
	{
		while (nodePtr->next != nullptr)
		{
			nodePtr = nodePtr->next;
		}

		nodePtr->next = newNode;
	}
	else
	{
		head = newNode; // The head points to the first node
	}


	//if (!head)
	//{
	//	head = newNode; // The head points to the first node
	//}
	//else
	//{
	//	for (nodePtr = head; nodePtr->next != nullptr; nodePtr = nodePtr->next)
	//	{
	//		nodePtr->next = newNode;
	//	}
	//	
	//}


	//ALTERNATIVE METHOD
	//	newNode->next = 0;   //  Otherwise it would not work well
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

//void ListOfInts::insertBack(int addData)
//{
//	NodeOfInt* curr=NULL;
//	NodeOfInt* n = new NodeOfInt;
//	n->next = NULL;
//	n->theValue = addData;
//
//	if (head != NULL)
//	{
//		while (curr->next != NULL)
//		{
//			curr = curr->next;
//		}
//		curr->next = n;
//	}
//	else
//	{
//		head = n;
//	}
//}

void ListOfInts::displayList()
{
	NodeOfInt *tempPtr = head;

	if (head != nullptr)
	{
		while (tempPtr != nullptr)
		{
			cout << tempPtr->theValue << endl;
			tempPtr = tempPtr->next;
		}

	}
}


//NodeOfInt* ListOfInts::deleteMostRecent()
//{
//	NodeOfInt* tempPtr = head;
//
//	if (head == NULL)
//	{
//		return NULL;
//	}
//	else if (head != NULL)
//	{
//		if (head->next == NULL)
//		{
//			cout << head->theValue;
//			delete head;
//			return NULL;
//		}
//	}
//	// Find the second last node
//	while (tempPtr->next->next != NULL)
//	{
//		cout << tempPtr->theValue;
//		tempPtr = tempPtr->next;
//		delete(tempPtr->next);
//
//		tempPtr->next = NULL;
//
//		
//	}
//	return tempPtr;
//}

void ListOfInts::deleteMostRecent()
{
	NodeOfInt *leadPtr = head;
	NodeOfInt *trailPtr = head;

	if (head == nullptr)
	{
		return;
	}
	if (head->next == nullptr)
	{
		delete head;
		
		cout << "the head node " << head->theValue << " was deleted!" << endl;
		head = nullptr;
		return;
	}

	trailPtr = leadPtr;
	while (trailPtr->next && trailPtr->next->next != nullptr)
	{
		trailPtr = trailPtr->next;
	}

	delete trailPtr->next;
	cout << "the value " << trailPtr->theValue << " was deleted!" << endl;
	trailPtr->next = nullptr;

	//NodeOfInt* delPtr = nullptr;
	//NodeOfInt* tempPtr = head;
	//NodeOfInt* currPtr = head;

	//while (currPtr != nullptr)
	//{
	//	tempPtr = currPtr;
	//	currPtr = currPtr->next;
	//}
	//if (delPtr == head)
	//{
	//	head = head->next;
	//	tempPtr = nullptr;

	//	delete delPtr;
	//	cout << "the value " << tempPtr->theValue << " was deleted!" << endl;
	//}
	//else if (currPtr == nullptr)
	//{
	//	delPtr = currPtr;
	//	delete delPtr;

	//	cout << "The value" << delPtr->theValue << " is not in the List!" << endl;
	//	
	//}
	


	//NodeOfInt *leadPtr = head;
	//NodeOfInt *trailPtr = head;

	//if (head != nullptr)
	//{
	//	if (head->next == nullptr)
	//	{
	//		head = nullptr;
	//	}
	//	else
	//	{
	//		// if head is not null but the head->next is null
	//		trailPtr->next = leadPtr;
	//		leadPtr = leadPtr->next;

	//		while (trailPtr->next->next != nullptr)
	//		{
	//			trailPtr = trailPtr->next;
	//		}

	//		// Change the next of second last to null , delete the last node
	//		leadPtr->next = nullptr;
	//		delete leadPtr;
	//		cout << leadPtr->theValue << " was deleted successfully!";
	//	}
	//}
	
	
		
}

void ListOfInts::deleteInt(int pos)
{
	NodeOfInt *delPtr = nullptr;
	NodeOfInt *tempPtr = head;
	NodeOfInt *currPtr = head;

	while (currPtr != nullptr && currPtr->theValue != pos)
	{
		tempPtr = currPtr;
		currPtr = currPtr->next;
	}
	if (currPtr == nullptr)
	{
		cout << "The value" << pos << " is not in the List!" << endl;
		delete delPtr;
	}
	else
	{
		delPtr = currPtr;
		currPtr = currPtr->next;

		if (delPtr == head)
		{
			head = head->next;
			tempPtr = nullptr;
		}


		delete delPtr;
		cout << "the value " << pos << " was deleted!" << endl;
	}




	//if (head == NULL) // Linked list is empty
	//	return;

	//NodeOfInt* temp = head; // Stor head node

	//if (pos == 0)
	//{
	//	head = temp->next; // Change head

	//	delete head; // delete head;
	//	return;
	//}

	//for (int i = 0; temp != NULL && i < pos - 1; i++) //Find previous to the node to the one
	//												  //being deleted
	//{
	//	cout << temp->next->theValue;
	//	temp = temp->next;
	//}
	//if (temp == NULL || temp->next == NULL) // If the position is mor than the prev nodes
	//{
	//	return;

	//	NodeOfInt* next = temp->next;	// Node temp->next is the node to be deleted
	//	// Store pointer to the next of node to be deleted

	//	cout << temp->next->theValue;

	//	delete (temp->next);
	//	temp->next = nullptr;    // Unlink the node from linked list  
	//	// Free memory

	//	temp->next = next;       // Unlink the deleted node from list
	//}

}

ListOfInts::~ListOfInts()
{
	while (head)
	{
		NodeOfInt* temp = new NodeOfInt;

		temp = head;

		head = head->next;

		delete temp;
	}
}