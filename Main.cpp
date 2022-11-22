#include "NodeOfInts.h"
#include "ListOfInts.h"

int main()
{

	ListOfInts L;

	L.insertBack(4);
	L.insertBack(6);
	L.insertBack(8);
	L.insertBack(10);
	L.displayList();

	L.deleteMostRecent();
	L.displayList();

	L.deleteInt(4);
	L.displayList();

	L.deleteMostRecent();
	L.displayList();

	L.deleteMostRecent();
	L.displayList();

	L.deleteMostRecent();
	L.displayList();

	L.~ListOfInts();
	L.displayList();
	cout << "Nothing more to display!" << endl;

	return 0;
}