#pragma once
#include <iostream>
#include <stack>
#include <utility>

namespace quick
{
	std::pair<int*, int*> tmp;
	std::stack<std::pair<int*, int*>> stack;

	void sort (int *data, int size)
	{
		if (size <= 1) return;
		while (!stack.empty ()) stack.pop ();
		stack.push (std::make_pair (data, data + size - 1));
		while (!stack.empty ())
		{
			tmp = stack.top (); stack.pop ();
			int *left = tmp.first + 1;
			int *right = tmp.second;
			int *pivot = left;
			do
			{
				while (*left < *pivot && right > left) left++;
				while (*right >= *pivot && right > left) right--;
				if (left < right) std::swap (*left, *right);
			} while (left < right);
			if (pivot < left) std::swap (*pivot, *left);
			if (right + 1 < tmp.second) stack.push (std::make_pair (right + 1, tmp.second));
			if (tmp.first < left - 1) stack.push (std::make_pair (tmp.first, left - 1));
		}
	}

	void sort_recursive (int *start, int *end)
	{
		if (start < end)
		{
			int *left = start + 1, *right = end - 1;
			int *pivot = start;
			while (left < right)
			{
				while (*left < *pivot && right > left) left++;
				while (*right >= *pivot && right > left) right--;
				if (left < right)
					std::swap (*left, *right);
			}
			if (pivot < left)
				std::swap (*pivot, *left);
			sort_recursive (start, right - 1);
			sort_recursive (left + 1, end);
		}
	}
}