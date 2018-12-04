#pragma once
#include <iostream>

template<class Tem>
class MyDArray
{
public:
	MyDArray();
	void CreateArray(int initialSize);
	void displayValue();
	void Delete(Tem);
	void Insert(Tem);
	


private:
	//This is what makes up the dynamic array, Data is the pointer
	//that points to the first index's address, fullArray is the
	//total size of the array, that changes once the array is full
	//and something tries to be inserted. Finaly, usedArray is the
	//number of currently used indexes.
	Tem * Data;
	int fullArray;
	int usedArray;
};

template<class Tem>
MyDArray<Tem>::MyDArray()
{

}

//This is what literally creates the array and sets the total or
//full size of the array when called from main.
template<class Tem>
 void MyDArray<Tem>::CreateArray(int initialSize)
{
	Data = new Tem[initialSize];
	fullArray = initialSize;
	usedArray = 0;
}
 
 //This is just a simple way to return the values at every index,
 //mainly for debugging.
 template<class Tem>
void MyDArray<Tem>::displayValue()
 {
	for (int i = 0; i < usedArray; i++)
	{
		std::cout << Data[i] << std::endl;
		std::cout << std::endl;
	}
 }

//The way this delete works is, you put in the number you want to
//delete, a new array is made, inside the for loop, while the data,
//with the index of i, is not equal to the number you are trying to
//delete, the new data's index increments and copies the data from
//the first array, then the usedArray number decrements, the first
//array is deleted and gets the values from the deleteArray.
template<class Tem>
void MyDArray<Tem>::Delete(Tem deletingValue)
{
	Tem *deleteArray = new Tem[fullArray];
	int current = 0;
	for (int i = 0; i < fullArray; i++)
	{
		if (Data[i] != deletingValue)
		{
			deleteArray[current++] = Data[i];
		}
	}
	usedArray--;
	delete Data;
	Data = deleteArray;
}

//This is to insert the values into the array and their, indexes.
//The way the following code works is that, if the array meets it's
//capacity, it doubles in size, then creates a new array of the doubled size,
//it then copies the data from the origninal arry, deletes the original,
//then a new "original" is made, and the data is copied back into it, and
//finally the value is actually inserted, otherwise if it isn't full, it
//just inserts the value.
template<class Tem>
void MyDArray<Tem>::Insert(Tem newValue)
{
	if (fullArray == usedArray)
	{
		fullArray *= 2;
		//new temperary array
		MyDArray<Tem> *newArray = new MyDArray<Tem>;
		newArray->CreateArray(fullArray);
		//the newArray calls on insert to insert
		//the data from the first array.
		for (int i = 0; i <= usedArray; i++)
		{
			newArray->Insert(Data[i]);
		}
		delete Data;
		//new "original" array
		Data = new Tem[fullArray];

		//data copied back into original
		for (int i = 0; i <= usedArray; i++)
		{
			Data[i] = newArray->Data[i];
		}
		delete newArray;
		//value to be inserted is inserted into array.
		Data[usedArray] = newValue;
		usedArray++;
	}
	else
	{
		Data[usedArray] = newValue;
		usedArray++;
	}
}