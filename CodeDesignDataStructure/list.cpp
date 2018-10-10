#include "list.h"

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
	return (first == nullptr);
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