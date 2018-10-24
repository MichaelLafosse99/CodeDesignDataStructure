#include <iostream>
#include "list.h"
#include "iterator.h"
#include "nodeType.h"
#include "UnorderedLinkedList.h"

int main()
{
	//Test Cases:

	//Iterating Nodes:
	{
		//Expected: A new node type is made
		//Result: node1 is created
		nodeType<int> node1;
		//Expected: A new node type is made
		//Result: node2 is created
		nodeType<int> node2;
		//Expected: A new node type is made
		//Result: node3 is created
		nodeType<int> node3;
		//Expected: A new node type is made
		//Result: node4 is created
		nodeType<int> node4;

		//Expected: node1's info is assigned 2
		//Result: node1's info is assigned 2
		node1.info = 2;
		//Expected: node2's info is assigned 5
		//Result: node2's info is assigned 5
		node2.info = 5;
		//Expected: node3's info is assigned 9
		//Result: node3's info is assigned 9
		node3.info = 9;
		//Expected: node4's info is assigned 1
		//Result: node4's info is assigned 1
		node4.info = 1;

		//Expected: node1's next should be node2
		//Result: node1's next is node2
		node1.next = &node2;
		//Expected: node2's next should be node3
		//Result: node2's next is node3
		node2.next = &node3;
		//Expected: node3's next should be node4
		//Result: node3's next is node4
		node3.next = &node4;
		//Expected: node4's next should be nullptr
		//Result: node4's next is nullptr
		node4.next = nullptr;


		//Expected:
		//The iter should iterate through the node,
		//assigning their values to the iter.
		//Result:
		//iter = 2, iter++, iter = 5...

		linkedListIterator<int> iter(&node1);
		for (int i = 0; i < 4; i++)
		{
			++iter;
		}
	}

	//List One:
	
	//Expected: Create a new list called one
	//Result: The list one is created
	unorderedLinkedList<int> one;
	//Expected: The First and Last pointers should point to nullptr
	//Result: First and Last point to NULL
	one.initializeList();
	//Expected: First should point to a new node with the info of 3
	//Result: First points to a new nod with the info of 3
	one.insertFirst(3);
	//Expected: Last should point to a new node with the info of 5
	//Result: The new node with the info of 5 is now the Last node
	one.insertLast(5);
	//Expected: First should point to a new node with the info of 1
	//Result: The new node with the info of 1 is now the First node
	one.insertFirst(1);
	//Expected: Last should point to a new node with the info of 3
	//Result: The new node with the info of 4 is now the Last node
	one.insertLast(4);
	//Expected: The node containing 5, should be
	//deleted out of the list
	//Result: 5 is deleted, leaving 3 to point to 4.
	one.deleteNode(5);
	//Expected: the search function should search for
	//the value 4, and return true when found.
	//Result: search returns true
	one.search(4);
	//List Two:

	//Expected: List two should have the same nodes as list one
	//when created
	//Result: List two has the same nodes as list one
	unorderedLinkedList<int> two(one);
	//Expected: Should returns the iterator that points to
	//the first node
	//Result: begin returns the interator that points to
	//the first node
	two.begin();
	//Expected: Should return the iterator that points to nullptr
	//Result: end returns the iterator that points to nullptr
	two.end();
	//Expected: the nodes in the list should print out to the console
	//Result: the console prints out the nodes in the list
	two.print();

	//List Three:

	//Expected: Create a new list called three
	//Result: The list three is created
	unorderedLinkedList<int> three;
	//Expected: First should point to a new node with the info of 9
	//Result: First points to a new nod with the info of 9 
	three.insertFirst(8);
	//Expected: Last should point to a new node with the info of 9
	//Result: The new node with the info of 9 is now the Last node
	three.insertLast(9);
	//Expected: First should point to a new node with the info of 1
	//Result: The new node with the info of 1 is now the First node
	three.insertFirst(1);
	//Expected: This should delete list three,
	//copy list one and replace the nodes in
	//list three, with the ones from list one
	//Result: list three's nodes are replaced with the nodes
	//from list one, and the original list three is deleted.
	three = one;
	return 0;
	
}