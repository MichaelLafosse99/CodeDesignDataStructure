#include <iostream>
#include "list.h"
#include "iterator.h"
#include "nodeType.h"
#include "UnorderedLinkedList.h"

int main()
{
	unorderedLinkedList<int> testlink;
	testlink.initializeList();
	testlink.insertFirst(3);
	testlink.insertLast(5);
	testlink.insertFirst(1);
	testlink.insertLast(4);
	unorderedLinkedList<int> testlink2(testlink);
	testlink.deleteNode(5);
	testlink.begin();
	testlink.end();
	testlink.print(); //expected 3 5 1 4
	testlink.destroyList();
	return 0;
	
}