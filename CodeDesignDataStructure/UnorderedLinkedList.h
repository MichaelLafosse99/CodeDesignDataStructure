#pragma once
#include "list.h"
template <typename T>
class unorderedLinkedList : public linkedListType<T>
{
public:
	bool search(const T&) const override;
	void insertFirst(const T&) override;
	void insertLast(const T&) override;
	void deleteNode(const T&) override;
};

template<typename T>
bool unorderedLinkedList<T>::search(const T & object) const
{
	//this uses first and currentnode pointers to iterate
	//through the list to find the node that is being searched

	nodeType<T> *currentNode;
	currentNode = this->First;
	for (int i = 0; i < this->mCount; i++)
	{
		if (currentNode->info == object)
		{
			return true;
		}
		if (currentNode->info != object)
		{
			currentNode = currentNode->next;
		}
	}
}

template<typename T>
void unorderedLinkedList<T>::insertFirst(const T & object)
{
	//If list is empty 
		//first and last point to the new node
		//increment count
	//else
		//new node's next is set to first
		//first points to new node
		//increment count

	nodeType<T> *test = new nodeType<T>;
	test->info = object;

	if (this->isEmptyList())
	{
		this->First = test;
		this->Last = test;
		test->next = nullptr;
		this->mCount++;
	}
	else
	{
		test->next = this->First;
		this->First = test;

		this->mCount++;
	}
}

template<typename T>
void unorderedLinkedList<T>::insertLast(const T & object)
{
	//If list is empty 
		//first and last point to the new node
		//increment count
	//else
		//last next is set to new node
		//last points to new node
		//test next points to nullptr
		//increment count

	nodeType<T> *test = new nodeType<T>;
	test->info = object;
	
	if (this->isEmptyList())
	{
		this->First = test;
		this->Last = test;
		this->mCount++;
	}
	else
	{
		this->Last->next = test;
		this->Last = test;
		test->next = nullptr;
		this->mCount++;
	}
}

template<typename T>
void unorderedLinkedList<T>::deleteNode(const T & object)
{

	//using two pointers, you can delete a node and have
	//the previous node point to the one after the deleted node,
	//completely erasing the node selected to be deleted.

	//the if statements are incase the node to be deleted is the first node,
	//the last node, or if the node is in the "middle" of the list.

	nodeType<T> *dptr;
	nodeType<T> *trailptr;
	if (this->mCount == 1)
	{
		delete this->First;
		this->initializeList();
		return;
	}
	dptr = this->First;
	trailptr = this->First;
	for (int i = 0; i < this->mCount; i++)
	{
		if (dptr->info == object)
		{
			this->First = this->First->next;
			delete dptr;
			this->mCount--;
			return;
		}
		if (dptr->info != object)
		{
			dptr = dptr->next;
			if (dptr == this->Last)
			{
				this->Last = trailptr;
				trailptr->next = nullptr;
				delete dptr;
				this->mCount--;
				return;
			}
			if (dptr->info == object)
			{
				trailptr->next = dptr->next;
				delete dptr;
				this->mCount--;
				return;
			}
			trailptr = trailptr->next;
		}
	}
}
