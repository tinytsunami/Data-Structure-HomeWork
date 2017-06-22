#pragma once
#include <iostream>

namespace merge
{
	int min (int a, int b)
	{
		return a > b ? b : a;
	}

	int* merge (int *a, int *b, int a_size, int b_size)
	{
		int size = a_size + b_size;
		int *c = new int[size];
		int i = 0, j = 0, k = 0;
		while (i < a_size && j < b_size)
			if (a[i] < b[j])
				c[k++] = a[i++];
			else
				c[k++] = b[j++];
		while (i < a_size) c[k++] = a[i++];
		while (j < b_size) c[k++] = b[j++];
		return c;
	}

	void sort (int *data, int size)
	{
		int len = 2;
		while (len <= size)
		{
			for (int i = 0; i < size; i += len)
			{
				int *a = (data + i);
				int a_size = len / 2;
				int *b = a + a_size;
				int b_size = len - a_size;
				if ((b + b_size) > (data + size))
					b_size = (data + size) - b;
				if ((a + a_size) > (data + size))
					a_size = (data + size) - a;
				if (b_size < 0) b_size = 0;
				if (a_size < 0) a_size = 0;
				int *c = merge (a, b, a_size, b_size);
				for (int j = 0; j < (a_size + b_size); j++)
					a[j] = c[j];
				delete[] c;
			}
			len *= 2;
		}
	}

	int* sort_recursive (int *start, int *end)
	{
		int size = end - start;
		if (size > 1)
		{
			int *center = start + int (size / 2);
			int *a = sort_recursive (start, center);
			int *b = sort_recursive (center, end);
			int a_size = center - start;
			int b_size = size - a_size;
			return merge (a, b, a_size, b_size);
		}
		else
			return start;
	}
}