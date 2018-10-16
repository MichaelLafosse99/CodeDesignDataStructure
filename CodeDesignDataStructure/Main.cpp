#include <iostream>
#include "list.h"
#include "iterator.h"
#include "nodeType.h"
#include "UnorderedLinkedList.h"

int main()
{
	nodeType<int> *h1 = new nodeType<int>;
	nodeType<int> *h2 = new nodeType<int>;
	nodeType<int> *h3 = new nodeType<int>;
	h1->info = 4;
	h2->info = 5;
	h3->info = 6;
	unorderedLinkedList<int>* testlink = new unorderedLinkedList<int>();
	testlink->insertFirst(h1->info);
	testlink->insertLast(h2->info);
	testlink->insertLast(h3->info);
	return 0;
}