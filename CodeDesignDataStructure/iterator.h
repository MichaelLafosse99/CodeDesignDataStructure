#pragma once
#include "nodeType.h"

template <typename T>
class linkedListIterator<T>
{
private:
	nodeType<T> *current;

public:
	linkedListIterator();
	linkedListIterator(nodeType<T>);
	T operator*();
	linkedListIterator<T> operator++();
	bool operator==(const linkedListIterator<T>&) const;
	bool operator!=(const linkedListIterator<T>&) const;
};