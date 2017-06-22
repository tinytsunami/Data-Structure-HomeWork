#pragma once
#include <cmath>
#include <iostream>

namespace radix
{
	int getDigit (int num, int digit)
	{
		return floor((num % (int)pow (10, digit)) / pow (10, digit - 1));
	}

	void sort (int *data, int size)
	{
		int max = 0;
		for (int i = 0; i < size; i++)
			if (max < data[i])
				max = data[i];

		int max_digit = ceil(log10 (max));

		int *tmp = new int[size];
		int index[10], count[10];
		for (int i = 1; i <= max_digit; i++)
		{
			for (int j = 0; j < 9; j++)
				count[j] = 0;
			for (int j = 0; j < size; j++)
				count[getDigit (data[j], i)]++;
			index[0] = 0;
			for (int j = 0; j < 9; j++)
				index[j + 1] = index[j] + count[j];
			for (int j = 0; j < size; j++)
				tmp[index[getDigit (data[j], i)]++] = data[j];
			for (int j = 0; j < size; j++)
				data[j] = tmp[j];
		}
	}
}