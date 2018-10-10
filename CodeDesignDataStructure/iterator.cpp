#include "iterator.h"

template<typename T>
inline linkedListIterator<T>::linkedListIterator()
{

}

template<typename T>
inline linkedListIterator<T>::linkedListIterator(nodeType<T>)
{

}

template<typename T>
T linkedListIterator<T>::operator*()
{
	return T();
}

template<typename T>
inline linkedListIterator<T> linkedListIterator<T>::operator++()
{
	return linkedListIterator<T>();
}

template<typename T>
inline bool linkedListIterator<T>::operator==(const linkedListIterator<T>&) const
{
	return false;
}

template<typename T>
inline bool linkedListIterator<T>::operator!=(const linkedListIterator<T>&) const
{
	return false;
}