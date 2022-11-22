#pragma once
#include <iostream>
using namespace std;
#include "NodeOfInts.h"

class ListOfInts
{
	friend class NodeOfInts;
private:
	NodeOfInt* head;

public:
	ListOfInts();
	void insertBack(int);
	void displayList();
	void deleteMostRecent();
	void deleteInt(int pos);
	~ListOfInts();
};
