#pragma once

template<class Tem>
class MyDArray
{
public:
	MyDArray();
	void Insert(Tem&);
	void Delete(Tem&);

private:

	Tem* Value;
	int storedValues;
	int fullArray;
};

template<class Tem>
MyDArray<Tem>::MyDArray()
{
	storedValues = 0;
	fullArray = 2;
	Value = new Tem[fullArray];
}

template<class Tem>
inline void MyDArray<Tem>::Insert(Tem & values)
{
	if (storedValues == fullArray)
	{
		fullArray *= 2;
	}
	else
	{
		Value[storedValues++] = values;
	}
}

template<class Tem>
inline void MyDArray<Tem>::Delete(Tem &)
{

}