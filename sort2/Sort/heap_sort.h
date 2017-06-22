#pragma once
#include <iostream>

namespace heap
{
	void restore (int index, int *data, int size)
	{
		int i = index, j;
		while (i <= size/2)
		{
			if (data[2 * i] < data[2 * i + 1])
				j = 2 * i;
			else
			{
				j = 2 * i + 1;
				if (j > size) j--;
			}
			if (data[i] < data[j])
				break;
			std::swap(data[i], data[j]);
			i = j;
		}
	}

	void sort (int *data, int size)
	{
		int *tmp = new int[size + 1];
		for (int i = 0; i < size; i++)
			tmp[i + 1] = data[i];
		for (int i = size / 2; i >= 1; i--)
			restore (i, tmp, size);
		int j = 0;
		for (int i = size; i >= 1; i--)
		{
			data[j++] = tmp[1];
			tmp[1] = tmp[i];
			restore (1, tmp, i);
		}
	}
}