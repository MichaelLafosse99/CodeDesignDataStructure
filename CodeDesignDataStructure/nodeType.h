#pragma once
//This is what makes up a node:
//info is the object or value, and
//the "next" pointer is the pointer
// that points to the next node, or if
// it's the last node, it points to the
//nullptr.

template<typename T>
struct nodeType
{
	T info;
	nodeType* next;
};