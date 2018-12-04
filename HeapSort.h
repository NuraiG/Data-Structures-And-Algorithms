#pragma once
#include "Swap.h"

void max_heap(int arr[],int start_index, int end_index)//ot max kam min;
{
	int root = start_index;
	int leftchild = 1;
	do
	{
		leftchild = 2 * root + 1;
		int rightchild = 2 * root + 2;// leftchild+1;
		int index = root;

		if (leftchild > end_index || rightchild > end_index)
			break;
		if (arr[index] > arr[leftchild])
			index = leftchild;
		if (arr[index] > arr[rightchild] && rightchild <= end_index)
			index = rightchild;
		if (index != root)
		{
			myswap(arr[index], arr[root]);
			root = index;
		}
		else { break; }

	}
	while (leftchild <= end_index);
}

void heapify_max(int arr[], int start_index, int end_index)//max kam min;
{
	int midIndex = (end_index - start_index - 1) / 2;

	while (midIndex >= 0)
	{
		max_heap(arr, midIndex, end_index);
		midIndex--;
	}
}

void heapSort_max(int *arr, int size)//max kam min;
{
	int high = size - 1;
	heapify_max(arr, 0, high);

	while (high > 0)
	{
		myswap(arr[high], arr[0]);
		high--;
		max_heap(arr, 0, high);
	}
}
////////////////////////////////////////////////////////////////////
void min_heap(int arr[], int start_index, int end_index)//ot min kam max;
{
	int root = start_index;
	int leftchild = 1;
	do
	{
		leftchild = 2 * root + 1;
		int rightchild = 2 * root + 2;// leftchild+1;
		int index = root;

		if (leftchild > end_index || rightchild > end_index)
			break;
		if (arr[index] < arr[leftchild])
			index = leftchild;
		if (arr[index] < arr[rightchild] && rightchild <= end_index)
			index = rightchild;
		if (index != root)
		{
			myswap(arr[index], arr[root]);
			root = index;
		}
		else { break; }

	} while (leftchild <= end_index);
}

void heapify_min(int arr[], int start_index, int end_index)//min kam max;
{
	int midIndex = (end_index - start_index - 1) / 2;

	while (midIndex >= 0)
	{
		min_heap(arr, midIndex, end_index);
		midIndex--;
	}
}

void heapSort_min(int *arr, int size)//min kam max;
{
	int high = size - 1;
	heapify_min(arr, 0, high);

	while (high > 0)
	{
		myswap(arr[high], arr[0]);
		high--;
		min_heap(arr, 0, high);
	}
}

