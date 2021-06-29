#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dump.h"
#include "args.h"


void makeRef(int nums[], int lo, int hi )
{	
}

int partition(int nums[], int lo, int hi)
{
	int mid = nums[lo];
	int i=lo, j=hi;
	while(i<j)
	{
		while(j>i && nums[j]>=mid) j--;
		if(j>i) nums[i++] = nums[j];
		while(i<j && nums[i]<=mid) i++;
		if(i<j) nums[j--] = nums[i];
	}
	nums[i] = mid;
	return i;
}

int sort(int nums[], int lo, int hi, int k)
{
	int i=lo, j=hi;
	int allsize = hi-lo+1;
	while(i<=j)
	{
		int mid = partition(nums, i, j);
		int tail=hi-mid+1;
		if(tail==k)
			return	nums[lo+allsize-tail];
		if(tail>k)
			i=mid+1;		
		else
			j=mid-1;
	}
	return -1;
	
	//sort(nums, lo, mid-1);
	//sort(nums, mid+1, hi);
}

int main(int argc, char **argv)
{
	int count = argc-1;
	int nums[count];

	getInputInts(nums, argc, argv);

	int rank = nums[0];
	int j = sort(nums, 1, count-1, rank);
	//dumpInts(nums, count);	
	printf("===%dth number is: %d\n", rank, j);
	return 0;
}


