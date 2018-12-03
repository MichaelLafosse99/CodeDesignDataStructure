#pragma once

template<class Tem>
class MyDArray
{
public:
	MyDArray();
	void CreateArray(int initialSize);
	void Insert(Tem);
	void Delete(Tem);

private:
	Tem * Data;
	int fullArray;
	int usedArray;
};

template<class Tem>
MyDArray<Tem>::MyDArray()
{

}

template<class Tem>
 void MyDArray<Tem>::CreateArray(int initialSize)
{
	MyDArray dynamic;
	Data = new Tem[initialSize];
	fullArray = initialSize;
	usedArray = 0;
}

template<class Tem>
void MyDArray<Tem>::Insert(Tem newValue)
{
	if (fullArray == usedArray)
	{
		fullArray *= 2;
		MyDArray<int> *newArray = new MyDArray<int>;
		newArray->CreateArray(fullArray);
		
		for (int i = 0; i <= usedArray; i++)
		{
			newArray->Insert(Data[i]);
		}
		delete Data;

		Data = new Tem[fullArray];

		for (int i = 0; i <= usedArray; i++)
		{
			Data[i] = newArray->Data[i];
		}
		delete newArray;

		Data[usedArray] = newValue;
		usedArray++;
	}
	else
	{
		Data[usedArray] = newValue;
		usedArray++;
	}
}

template<class Tem>
void MyDArray<Tem>::Delete(Tem)
{

}