#include <iostream>
#include "list.h"
#include "iterator.h"
#include "nodeType.h"
#include "UnorderedLinkedList.h"

int main()
{
	nodeType<int> *h1 = new nodeType<int>;
	nodeType<int> *h2 = new nodeType<int>;
	h1->info = 4;
	h2->info = 5;
	h1->next = h2;
	h2->next = nullptr;

	linkedListIterator<int> Iterator(h1);
	++Iterator;

	int a = *Iterator;
	return 0;
}