#include "dump.h"
#include <stdio.h>

void dump(const char *buf, int len)
{
	printf("%s\n", buf);
}

template<typename T>
void dumpArray(T nums[], int lo, int hi)
{
}

void dumpInts(int nums[], int lo, int hi)
{
	for(int i=lo; i<=hi; ++i)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");
}

void dumpInts(int nums[], int count)
{
	dumpInts(nums, 0, count-1);
}


void dumpInts(const vector<int> &nums, int lo, int hi)
{
	for(int i=lo; i<=hi; ++i)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");
}


void dumpInts(const vector<int> &nums)
{
	if(nums.size()>0)
		dumpInts(nums, 0, nums.size()-1);
}

