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
const linkedListType<T>& linkedListType<T>::operator=(const linkedListType<T>& list)
{
	this->copyList(list);
	return *this;
}

template<typename T>
void linkedListType<T>::initializeList()
{
	mCount = 0;
	First = nullptr;
	Last = nullptr;
}

template<typename T>
bool linkedListType<T>::isEmptyList() const
{
	return (First == nullptr);
}

template<typename T>
void linkedListType<T>::print() const
{
	nodeType<T> *iter;
	iter = this->First;
	for (int i = 0; i < mCount; i++)
	{
		std::cout << iter->info << std::endl;
		iter = iter->next;
	}
}

template<typename T>
int linkedListType<T>::length() const
{
	return mCount;
}

template<typename T>
void linkedListType<T>::destroyList()
{
	nodeType<T> * iter;
	
	while(mCount != 0)
	{
		iter = this->First;
		if (mCount == 1)
		{
			delete First;
			initializeList();
			mCount--;
			return;
		}
		else
		{
			First = First->next;
			delete iter;
			mCount--;
		}
	}
}

template<typename T>
T linkedListType<T>::front() const
{
	return First->info;
}

template<typename T>
T linkedListType<T>::back() const
{
	return Last->info;
}

template<typename T>
linkedListIterator<T> linkedListType<T>::begin()
{
	return linkedListIterator<T>(First);
}

template<typename T>
linkedListIterator<T> linkedListType<T>::end()
{
	return linkedListIterator<T>(Last);
}

template<typename T>
linkedListType<T>::linkedListType()
{
	
}

template<typename T>
linkedListType<T>::linkedListType(const linkedListType<T>& list)
{
	this->First = new nodeType<T>;
	nodeType<T>* listOne = (list.First);
	nodeType<T>* listTwo = (this->First);

	for (int i = 0; i < list.mCount; i++)
	{
		listTwo->info = listOne->info;
		if (i < list.mCount -1)
		{
			listTwo->next = new nodeType<T>;
			mCount++;
			listTwo = listTwo->next;
			listOne = listOne->next;
		}
	}
	Last = listTwo;
	listTwo->next = nullptr;
}

template<typename T>
linkedListType<T>::~linkedListType()
{
	destroyList();
}

template<typename T>
void linkedListType<T>::copyList(const linkedListType<T>& list)
{
	//pseudocode

	//destroy list
	//pointer to list.first

	//for (i < list.count)
	//this->insertLast(listOne->info);
	//pointer++;
	//repeat

	this->destroyList();
	nodeType<T>* listOne = (list.First);

	for (int i = 0; i < list.mCount; i++)
	{
		this->insertLast(listOne->info);
		listOne = listOne->next;
	}

}