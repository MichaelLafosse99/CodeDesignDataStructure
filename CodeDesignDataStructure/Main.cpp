#include <iostream>
#include "list.h"
#include "iterator.h"
#include "nodeType.h"
#include "UnorderedLinkedList.h"

int main()
{
	unorderedLinkedList<int>* testlink = new unorderedLinkedList<int>();
	testlink->insertFirst(4);
	testlink->insertLast(5);
	testlink->insertFirst(6);
	testlink->insertLast(3);
	return 0;
}