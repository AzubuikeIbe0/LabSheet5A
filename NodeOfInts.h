#pragma once
#include <iostream>
using namespace std;

class NodeOfInt
{
	friend class ListOfInts;
private:
	int theValue;
	NodeOfInt* next;

public:
	NodeOfInt();
};


