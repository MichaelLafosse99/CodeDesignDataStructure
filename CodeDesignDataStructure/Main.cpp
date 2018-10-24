#include <iostream>
#include "list.h"
#include "iterator.h"
#include "nodeType.h"
#include "UnorderedLinkedList.h"

int main()
{
	//Test Cases:

	//List One:
	{
		
	nodeType<int> node1;
	nodeType<int> node2;
	nodeType<int> node3;
	nodeType<int> node4;
	node1.info = 2;
	node2.info = 5;
	node3.info = 9;
	node4.info = 1;

	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = nullptr;

	//Check to see if iterator
	//iterates thru nodes.

	//Expected:
	//iter = 2, iter++, iter = 5...
	//Result:
	//iter = 2, iter++, iter = 5...

	linkedListIterator<int> iter(&node1);
	for (int i = 0; i < 4; i++)
	{
		++iter;
	}
}

	//Test Case 2:

	//Expected:
	//Create a new list,
	//initialize the first and last to nullptr,
	//insert nodes,
	unorderedLinkedList<int> one;
	one.initializeList();
	one.insertFirst(3);
	one.insertLast(5);
	one.insertFirst(1);
	one.insertLast(4);
	one.deleteNode(5);
	unorderedLinkedList<int> two(one);
	two.begin();
	two.end();
	two.print(); //expected 3 5 1 4
	
	unorderedLinkedList<int> three;
	three.initializeList();
	three.insertFirst(8);
	three.insertLast(9);
	three.insertFirst(1);
	three = one;
	return 0;
	
}