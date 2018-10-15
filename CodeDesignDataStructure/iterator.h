#pragma once
#include "nodeType.h"

template <typename T>
class linkedListIterator
{
private:
	nodeType<T> *current;

public:
	linkedListIterator();
	linkedListIterator(nodeType<T>* ptr);
	T operator*();
	linkedListIterator<T> operator++();
	bool operator==(const linkedListIterator<T>&) const;
	bool operator!=(const linkedListIterator<T>&) const;
};

template<typename T>
linkedListIterator<T>::linkedListIterator()
{
	current = nullptr;
}

template<typename T>
linkedListIterator<T>::linkedListIterator(nodeType<T>* ptr)
{
	this->current = ptr;
}

template<typename T>
T linkedListIterator<T>::operator*()
{
	return current->info;
}

template<typename T>
linkedListIterator<T> linkedListIterator<T>::operator++()
{
	current = current->next;
	return *this;
}

template<typename T>
bool linkedListIterator<T>::operator==(const linkedListIterator<T>& other) const
{
	return this->current == other.current;
}

template<typename T>
bool linkedListIterator<T>::operator!=(const linkedListIterator<T>& other) const
{
	return this->current != other.current;
}