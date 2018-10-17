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
bool unorderedLinkedList<T>::search(const T &) const
{
	return false;
}

template<typename T>
void unorderedLinkedList<T>::insertFirst(const T & object)
{
	//If list is empty 
		//first and last point to the new node
		//increment count
	//else
		//new node links to first
		//first points to new node
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
		//last link is set to new node
		//last points to new node
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
	  = test;
		this->Last = test;
		this->mCount++;
	}
}

template<typename T>
void unorderedLinkedList<T>::deleteNode(const T &)
{
	
}
