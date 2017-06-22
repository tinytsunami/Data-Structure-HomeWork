#pragma once
#include "bubble_sort.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"
#include "radix_sort.h"
#include "heap_sort.h"

#define ALGORITHMS_COUNT    9

#define BUBBLE_SORT			 0 
#define SELECTION_SORT		 1
#define INSERTION_SORT		 2  
#define MERGE_SORT			 3 
#define MERGE_RECURSIVE_SORT 4
#define QUICK_SORT			 5
#define QUICK_RECURSIVE_SORT 6
#define RADIX_SORT			 7 
#define HEAP_SORT			 8

int* sort(int type, int *data, int size)
{
	switch (type)
	{
    case BUBBLE_SORT:
        bubble::sort(data, size);
        break;
    case SELECTION_SORT:
        selection::sort(data, size);
        break;
    case INSERTION_SORT:
        insertion::sort(data, size);
        break;
	case MERGE_SORT:
		merge::sort (data, size);
		break;
	case MERGE_RECURSIVE_SORT:
		data = merge::sort_recursive (data, data + size);
		break;
	case QUICK_SORT:
		quick::sort (data, size);
		break;
	case QUICK_RECURSIVE_SORT:
		quick::sort_recursive (data, data + size);
		break;
	case RADIX_SORT:
		radix::sort (data, size);
		break;
    case HEAP_SORT:
        heap::sort(data, size);
        break;
	}
	return data;
}