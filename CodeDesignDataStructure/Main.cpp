#include <iostream>
#include "list.h"
#include "iterator.h"
#include "nodeType.h"
#include "UnorderedLinkedList.h"

int main()
{
	unorderedLinkedList<int>* testlink = new unorderedLinkedList<int>();
	testlink->initializeList();
	testlink->insertFirst(3);
	testlink->insertLast(5);
	testlink->insertFirst(1);
	testlink->insertLast(4);
	testlink->deleteNode(5);
	testlink->begin();
	testlink->end();
	testlink->print();
	testlink->destroyList();
	return 0;
}