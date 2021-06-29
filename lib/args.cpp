#include "args.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getInputInts(int outNums[], int argc, char **argv)
{
	for(int i=1; i<argc; ++i)
	{
		outNums[i-1] = atoi(argv[i]);
	}
}

void getInputInts(vector<int> &outNums, int argc, char **argv)
{
	for(int i=1; i<argc; ++i)
	{
		outNums.push_back( atoi(argv[i]) );
	}
}


