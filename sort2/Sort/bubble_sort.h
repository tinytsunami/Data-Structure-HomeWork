#pragma once
#include <iostream>

namespace bubble
{
	void sort (int *data, int size)
	{
		for (int i = 0; i < size; i++)
			for (int j = i; j < size; j++)
				if (data[i] > data[j])
					std::swap (data[i], data[j]);
	}
}