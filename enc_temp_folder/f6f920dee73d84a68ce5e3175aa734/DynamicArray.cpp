#include "DynamicArray.h"

int main()
{
	MyDArray<int> test;

	test.CreateArray(5);

	test.Insert(1);
	test.Insert(2);
	test.Insert(3);
	test.Insert(7);
	test.Insert(5);
	test.Insert(6);
	//test.Insert(7);
	//test.Insert(8);
	//test.Insert(9);
	//test.Insert(10);
	//test.Insert(11);

	test.displayValue();
	test.Delete(2);
	test.displayValue();
	return 0;
}