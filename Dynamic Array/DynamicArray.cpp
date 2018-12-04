#include "DynamicArray.h"

int main()
{
	MyDArray<int> test;
	//Expected: an array should be created with a
	//a size of 5.
	test.CreateArray(5);
	//Result: An array is made with a size of 5.

	//Expected: numbers 1-11 should be inserted and
	//displayed to the console after displayValue() is
	//called. The full size should also be set to 20.
	test.Insert(1);
	test.Insert(2);
	test.Insert(3);
	test.Insert(7);
	test.Insert(5);
	test.Insert(6);
	test.Insert(7);
	test.Insert(8);
	test.Insert(9);
	test.Insert(10);
	test.Insert(11);
	test.displayValue();
	//Result: Numbers 1-11 are displayed, and the size is set
	//to 20.
	system("cls");
	//Expected: the value 2 should be removed from the array,
	//and the usedArray size should be set to 10.
	test.Delete(2);
	test.displayValue();
	//Result: 2 is removed and the usedArray is set to 10.
	return 0;
}