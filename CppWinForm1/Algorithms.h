#pragma once
#include <cstdlib>
#include <ctime>
#include "Tree.h"

#define ALGORITHMS_COUNT    (BOGO_SORT - 1)

#define BUBBLE_SORT			0   //O
#define SELECTION_SORT		1   //O
#define INSERTION_SORT		2   //O
#define COCKTAIL_SORT		3   //O
#define BUCKET_SORT			4   //O
#define COUNTING_SORT		5   //O
#define MERGE_SORT			6   //O
#define BINARY_TREE_SORT	7
#define COMB_SORT	    	8   //O
#define RADIX_SORT			9
#define GNOME_SORT			10  //O
#define ODD_EVEN_SORT		11  //O
#define BLOCK_SORT			12
#define QUICK_SORT			13
#define HEAP_SORT			14
#define STOOGE_SORT			15  //O
#define BOGO_SORT			16  //O

int tmp[65536];
int base[7][110001];
int index;

void swap(int &a, int &b)
{
    int t;
    t = a;
    a = b;
    b = t;
}
void clearTmp()
{
    for (int i = 0; i < 65536; i++)
        tmp[i] = 0;
}
int *merge(int *data1, int *data2, int size1, int size2)
{
    int len = size1 + size2;
    int *tmp = new int[len];

    int index1, index2;
    index1 = index2 = 0;

    for (int i = 0; i < len; i++)
        if (index1 == size1)
            tmp[i] = data2[index2++];
        else if (index2 == size2)
            tmp[i] = data1[index1++];
        else if (data1[index1] < data2[index2])
            tmp[i] = data1[index1++];
        else
            tmp[i] = data2[index2++];

    return tmp;
}

void bubbleSort(int *data, int size)
{
    for (int i = 0; i < size; i++)
        for (int j = i; j < size; j++)
            if (data[i] > data[j])
                swap(data[i], data[j]);
}
void selectionSort(int *data, int size)
{
    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
            if (data[min] > data[j])
                min = j;
        swap(data[i], data[min]);
    }
}
void insertionSort(int *data, int size)
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
void cocktailSort(int *data, int size)
{
    int j, left, right;
    left = 0;
    right = size - 1;
    while (left < right)
    {
        for (j = left; j < right; j++)
            if (data[j] > data[j + 1])
                swap(data[j], data[j + 1]);
        right--;

        for (j = right; j > left; j--)
            if (data[j] < data[j - 1])
                swap(data[j], data[j - 1]);
        left++;
    }
}
void bucketSort(int *data, int size)
{
    for (int i = 0; i < 7; i++)
        base[i][0] = 0;

    for (int i = 0; i < size; i++)
        for (int j = 0; j < 7; j++)
            if (data[i] >= j * 10000 && data[i] < (j + 1) * 10000)
                base[j][1 + base[j][0]++] = data[i];

    for (int i = 0; i < 7; i++)
        insertionSort(&base[i][1], base[i][0]);

    int index = 0;
    for (int i = 0; i < 7; i++)
        for (int j = 0; j < base[i][0]; j++)
            data[index++] = base[i][j + 1];
}
void countingSort(int *data, int size)
{
    int index;
    clearTmp();
    for (int i = 0; i < size; i++)
        tmp[data[i]]++;
    index = 0;
    for (int i = 0; i < 65536; i++)
        while (tmp[i] > 0)
        {
            data[index++] = i;
            tmp[i]--;
        }
}
void radixSort(int *data, int size)
{
}
int *mergeSort(int *data, int size)
{
    if (size > 1)
    {
        int leftSize, rightSize;
        leftSize = size / 2;
        rightSize = size - leftSize;

        int *left, *right;
        left = new int[leftSize];
        right = new int[rightSize];

        for (int i = 0; i < leftSize; i++)
            left[i] = data[i];

        for (int i = leftSize; i < size; i++)
            right[i - leftSize] = data[i];

        left = mergeSort(left, leftSize);
        right = mergeSort(right, rightSize);

        return merge(left, right, leftSize, rightSize);
    }
    else
        return data;
}
void gnomeSort(int *data, int size)
{
    int pos = 0;
    while (pos < (size - 1))
    {
        if (data[pos] <= data[pos + 1])
            pos++;
        else
        {
            swap(data[pos], data[pos + 1]);
            pos--;
        }
        if (pos < 0)
            pos = 0;
    }
}
void combSort(int *data, int size)
{
    for (int width = size - 1; width > 0; width--)
        for (int begin = 0; (begin + width) < size; begin++)
            if (data[begin] > data[begin + width])
                swap(data[begin], data[begin + width]);
}
void stoogeSort(int *data, int left, int right)
{
    if (data[right] < data[left])
        swap(data[left], data[right]);
    if ((right - left + 1) >= 3)
    {
        int tmp = (right - left + 1) / 3;
        stoogeSort(data, left, right - tmp);
        stoogeSort(data, left + tmp, right);
        stoogeSort(data, left, right - tmp);
    }
}
void oodEvenSort(int *data, int size)
{
    bool sorted = false;
    while (sorted == false)
    {
        sorted = true;
        for (int base = 0; base < 2; base++)
            for (int i = base; i < (size - 1); i += 2)
                if (data[i] > data[i + 1])
                {
                    swap(data[i], data[i + 1]);
                    sorted = false;
                }
    }
}

void bogoSort(int *data, int size)
{
    srand(time_t(NULL));
    bool sorted = false;
    while (sorted == false)
    {
        sorted = true;
        for (int i = 0; i < size; i++)
            tmp[(rand() % size)] = data[i];
        
        for (int i = 1; i < size; i++)
            if (tmp[i] < tmp[i - 1])
                sorted = false;
    }
    for (int i = 1; i < size; i++)
        data[i] = tmp[i];
}

int* sort(int type, int *data, int size)
{
	switch (type)
	{
    case BUBBLE_SORT:
        bubbleSort(data, size);
        break;
    case SELECTION_SORT:
        selectionSort(data, size);
        break;
    case INSERTION_SORT:
        insertionSort(data, size);
        break;
    case COCKTAIL_SORT:
        cocktailSort(data, size);
        break;
    case BUCKET_SORT:
        bucketSort(data, size);
        break;
    case COUNTING_SORT:
        countingSort(data, size);
        break;
    case RADIX_SORT:
        radixSort(data, size);
        break;
    case MERGE_SORT:
        data = mergeSort(data, size);
        break;
    case COMB_SORT:
        combSort(data, size);
        break;
    case ODD_EVEN_SORT:
        oodEvenSort(data, size);
        break;
    case GNOME_SORT:
        gnomeSort(data, size);
        break;
    case STOOGE_SORT:
        stoogeSort(data, 0, size - 1);
        break;
	default: //BOGO SORT
        bogoSort(data, size);
		break;
	}
	return data;
}