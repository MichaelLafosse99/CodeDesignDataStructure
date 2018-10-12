#include "iterator.h"

template<typename T>
linkedListIterator<T>::linkedListIterator()
{
	current = nullptr;
}

template<typename T>
linkedListIterator<T>::linkedListIterator(nodeType<T> valueref)
{
	current = &valueref;
}

template<typename T>
T linkedListIterator<T>::operator*()
{
	return current->info;
}

template<typename T>
linkedListIterator<T> linkedListIterator<T>::operator++()
{
	return current = current->next;
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