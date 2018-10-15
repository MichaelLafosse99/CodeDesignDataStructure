#pragma once
#include "list.h"
template <typename T>
class unorderedLinkedList : public linkedListType<T>
{
public:
	bool search(const T& const);
	void insertFirst(const T&);
	void insertLast(const T&);
	void deleteNode(const T&);
};

template<typename T>
inline bool unorderedLinkedList<T>::search(const T & const)
{
	return false;
}

template<typename T>
inline void unorderedLinkedList<T>::insertFirst(const T & object)
{
	this->mCount++;
	nodeType<T> *test = new nodeType<T>;
	test.info = object;
	test->next = this->First;
	this->First = test;

}

template<typename T>
inline void unorderedLinkedList<T>::insertLast(const T &)
{
}

template<typename T>
inline void unorderedLinkedList<T>::deleteNode(const T &)
{
}
