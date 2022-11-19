#include "NodeOfInts.h"
#include "ListOfInts.h"

int main()
{

	ListOfInts L;

	L.insertBack(4);
	L.displayList();
	L.deleteInt(2);
	L.deleteMostRecent();

	return 0;
}