#pragma once
#include "iterator.h"
#include "nodeType.h"

template<typename T>
class  linkedListType
{
protected:
	int mCount;
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
	virtual bool search(const T&) const = 0;
	virtual void insertFirst(const T&) = 0;
	virtual void insertLast(const T&) = 0;
	virtual void deleteNode(const T&) = 0;
	linkedListIterator<T> begin();
	linkedListIterator<T> end();
	linkedListType();
	linkedListType(const linkedListType<T>&);
	~linkedListType();

private:
	void copyList(const linkedListType<T>&);
};

template<typename T>
const linkedListType<T>& linkedListType<T>::operator=(const linkedListType<T>&)
{
	// TODO: insert return statement here
}

template<typename T>
void linkedListType<T>::initializeList()
{

}

template<typename T>
bool linkedListType<T>::isEmptyList() const
{
	return (First == nullptr);
}

template<typename T>
void linkedListType<T>::print() const
{

}

template<typename T>
int linkedListType<T>::length() const
{
	return 0;
}

template<typename T>
void linkedListType<T>::destroyList()
{

}

template<typename T>
T linkedListType<T>::front() const
{
	return T();
}

template<typename T>
T linkedListType<T>::back() const
{
	return T();
}

template<typename T>
linkedListIterator<T> linkedListType<T>::begin()
{
	return linkedListIterator<T>();
}

template<typename T>
linkedListIterator<T> linkedListType<T>::end()
{
	return linkedListIterator<T>();
}

template<typename T>
linkedListType<T>::linkedListType()
{

}

template<typename T>
linkedListType<T>::linkedListType(const linkedListType<T>&)
{

}

template<typename T>
linkedListType<T>::~linkedListType()
{

}

template<typename T>
void linkedListType<T>::copyList(const linkedListType<T>&)
{

}