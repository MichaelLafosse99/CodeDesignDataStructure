#pragma once
#include "iterator.h"
#include "nodeType.h"

template<typename T>
class linkedListType<T>
{
protected:
	int count;
	nodeType<T> *First;
	nodeType<T> *Last;
public:
	const linkedListType<T>& operator = (const linkedListType<T>&);
	void initializeList();
	bool isEmptyList() const;
	void print() const;
	int length() const;
	void destroyList();
	T front() const;
	T back() const;
	bool search(const T&) const = 0;
	void insertFirst(const T&) = 0;
	void insertLast(const T&) = 0;
	void deleteNode(const T&) = 0;
	linkedListIterator<T> begin();
	linkedListIterator<T> end();
	linkedListType();
	linkedListType(const linkedListType<T>&);
	~linkedListType();

private:
	void copyList(const linkedListType<T>&);
};