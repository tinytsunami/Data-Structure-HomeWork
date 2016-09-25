#pragma once

#define BUBBLE_SORT			0
#define SELECTION_SORT		1
#define INSERTION_SORT		2
#define COCKTAIL_SORT		3
#define BUCKET_SORT			4
#define COUNTING_SORT		5
#define MERGE_SORT			6
#define BINARY_TREE_SORT	7
#define PIGEONHOLE_SORT		8
#define RADIX_SORT			9
#define GNOME_SORT			10
#define LIBRARY_SORT		11
#define BLOCK_SORT			12
#define QUICK_SORT			13
#define BEAD_SORT			14
#define SIMPLE_PANCAKE_SORT 15
#define SPAGHETTI_SORT		16
#define STOOGE_SORT			17
#define SLEEP_SORT			18
#define BOGO_SORT			19

void swap(int &a, int &b)
{
	a ^= b ^= a ^= b;
}

int* sort(int type, int *data, int size)
{
	switch (type)
	{
	case BUBBLE_SORT:
		for (int i = 0; i < size; i++)
			for (int j = i; j < size; j++)
				if (data[i] > data[j])
					swap(data[i], data[j]);
		break;
	default:
		//error..
		break;
	}
	return data;
}