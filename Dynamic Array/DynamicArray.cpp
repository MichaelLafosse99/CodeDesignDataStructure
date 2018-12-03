#include "DynamicArray.h"

int main()
{
	MyDArray<int>* test = new MyDArray<int>();

	int nums[10] = { 0,1,2,3,4,5,6,7,8,9 };

	test->Insert(nums[0]);
	test->Insert(nums[1]);
	test->Insert(nums[2]);

	return 0;
}