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
	if (this->mCount == 2)
	{
		this->First->next = this->Last;
	}
	this->mCount++;
	nodeType<T> *test = new nodeType<T>;
	if (this->Last == nullptr)
	{
		this->Last = test;
		if (this->First = nullptr)
		{
			this->First = test;
		}
	}
	test->info = object;
	test->next = this->First;
	this->First = test;

}

template<typename T>
void unorderedLinkedList<T>::insertLast(const T & object)
{
	if (this->mCount == 2)
	{
		this->First->next = this->Last; 
	}

	this->mCount++;
	nodeType<T> *test = new nodeType<T>;
	if (this->Last == nullptr)
	{
		this->Last = test;
		if (this->First = nullptr)
		{
			this->First = test;
		}
	}
	test->info = object;
	this->Last = test;
	

}

template<typename T>
void unorderedLinkedList<T>::deleteNode(const T &)
{
	
}
