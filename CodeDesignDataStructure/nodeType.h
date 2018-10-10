#pragma once

template<typename T>
struct nodeType
{
	T info;
	node<T>* link;
};