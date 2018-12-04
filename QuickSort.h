#pragma once
#include "Swap.h"

int partition(int* arr, int left, int right)
{
	int lastElem = arr[right];
	int indexSmaller = left - 1;
	for (int i = left; i < right; i++)
	{
		if (arr[i] <= lastElem)
		{
			indexSmaller++;
			myswap(arr[i], arr[indexSmaller]);
		}
	}
	myswap(arr[indexSmaller + 1], arr[right]);
	return indexSmaller + 1;
}

void quickSort(int* arr, int left, int right)
{
	if (left < right)
	{
		int partitionIndex = partition(arr, left, right);
		quickSort(arr, left, partitionIndex - 1);
		quickSort(arr, partitionIndex + 1, right);
	}
}