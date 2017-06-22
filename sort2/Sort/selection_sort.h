#pragma once
#include <iostream>

namespace selection
{
	void sort (int *data, int size)
	{
		for (int i = 0; i < size; i++)
		{
			int min = i;
			for (int j = i + 1; j < size; j++)
				if (data[min] > data[j])
					min = j;
			std::swap (data[i], data[min]);
		}
	}
}