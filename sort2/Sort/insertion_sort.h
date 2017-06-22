#pragma once
#include <iostream>

namespace insertion
{
	void sort (int *data, int size)
	{
		int i, j;
		for (i = 0; i < size; i++)
		{
			int tmp = data[i];
			for (j = i; tmp < data[j - 1] && j > 0; j--)
				data[j] = data[j - 1];
			data[j] = tmp;
		}
	}
}