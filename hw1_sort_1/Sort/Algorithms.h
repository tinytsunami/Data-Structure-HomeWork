#pragma once
#include <cstdlib>
#include <ctime>
#include "Tree.h"

#define ALGORITHMS_COUNT    17

#define BUBBLE_SORT			0 
#define SELECTION_SORT		1 
#define INSERTION_SORT		2 
#define COCKTAIL_SORT		3 
#define BUCKET_SORT			4 
#define COUNTING_SORT		5 
#define MERGE_SORT			6 
#define BINARY_TREE_SORT	7 
#define COMB_SORT	    	8 
#define RADIX_SORT			9 
#define GNOME_SORT			10
#define ODD_EVEN_SORT		11
#define SHELL_SORT			12
#define QUICK_SORT			13
#define HEAP_SORT			14
#define STOOGE_SORT			15
#define BOGO_SORT			16

int tmp[65536];
int base[10][110001];

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
        //find min to swap
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
        //arrange array (move origin data)
        for (j = i; tmp < data[j - 1] && j > 0; j--)
            data[j] = data[j - 1];
        //insert tmp
        data[j] = tmp;
    }
}
void cocktailSort(int *data, int size)
{
    //deformation bubble sort
    int j, left, right;
    left = 0;
    right = size - 1;
    while (left < right)
    {
        //process left
        for (j = left; j < right; j++)
            if (data[j] > data[j + 1])
                swap(data[j], data[j + 1]);
        right--;
        //process right
        for (j = right; j > left; j--)
            if (data[j] < data[j - 1])
                swap(data[j], data[j - 1]);
        left++;
    }
}
void bucketSort(int *data, int size)
{
    //initialize row index
    for (int i = 0; i < 7; i++)
        base[i][0] = 0;
    //push to bucket
    for (int i = 0; i < size; i++)
        for (int j = 0; j < 7; j++)
            if (data[i] >= j * 10000 && data[i] < (j + 1) * 10000)
                base[j][1 + base[j][0]++] = data[i];
    //sorting(insertion)
    for (int i = 0; i < 7; i++)
        insertionSort(&base[i][1], base[i][0]);
    //copy data
    int index = 0;
    for (int i = 0; i < 7; i++)
        for (int j = 0; j < base[i][0]; j++)
            data[index++] = base[i][j + 1];
}
void countingSort(int *data, int size)
{
    int index;
    clearTmp();
    //push to bucket
    for (int i = 0; i < size; i++)
        tmp[data[i]]++;
    //counting data by bucket
    index = 0;
    for (int i = 0; i < 65536; i++)
        while (tmp[i] > 0)
        {
            data[index++] = i;
            tmp[i]--;
        }
}
void binaryTreeSort(int *data, int size)
{
    //create tree
    Tree binTree(data);
    for (int i = 0; i < size; i++)
        binTree.push(data[i]);
    //sorting
    binTree.inOrder();
}
void radixSort(int *data, int size)
{
    //initialize
    int radix = 1;
    //process
    while (radix <= 10000)
    {
        //initialize index of bucket
        for (int i = 0; i < 10; i++)
            base[i][0] = 0;
        //push data to bucket by radix
        for (int i = 0; i < size; i++)
        {
            int label = (data[i] / radix) % 10;
            base[label][1 + base[label][0]++] = data[i];
        }
        //merge bucket to data
        int index = 0;
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < base[i][0]; j++)
                data[index++] = base[i][j + 1];
        //radix bigger
        radix *= 10;
    }
}
int *mergeSort(int *data, int size)
{
    //have return...the pointer index make confusion...
    if (size > 1)
    {
        //calc. point of split
        int leftSize, rightSize;
        leftSize = size / 2;
        rightSize = size - leftSize;
        //create new space
        int *left, *right;
        left = new int[leftSize];
        right = new int[rightSize];
        //assign data to left and right space
        for (int i = 0; i < leftSize; i++)
            left[i] = data[i];
        for (int i = leftSize; i < size; i++)
            right[i - leftSize] = data[i];
        //recursive
        left = mergeSort(left, leftSize);
        right = mergeSort(right, rightSize);
        //return left + right
        return merge(left, right, leftSize, rightSize);
    }
    else
        return data; //data only one
}
void quickSort(int *start, int *end)
{
    //only one item
    if (end - start <= 1)
        return;
    //seting pivot
    int *pivot = start;
    //head of new subSequence
    start += 1;
    //process	
    for (int *data = start; data < end; data++)
        if (*data < *pivot)
        {
            swap(*data, *start);
            start++;
        }
    //pivot to point of split
    swap(*pivot, *(start - 1));
    //left SubSequence
    quickSort(pivot, start);
    //right SubSequence
    quickSort(start, end);
}
void gnomeSort(int *data, int size)
{
    int pos = 0;
    while (pos < (size - 1))
    {
        if (data[pos] <= data[pos + 1])
            pos++; // move to unsorted data
        else
        {
            //push data forward
            swap(data[pos], data[pos + 1]);
            pos--;
        }
        //stop
        if (pos < 0) pos = 0;
    }
}
void combSort(int *data, int size)
{
    //reduce spacing slowly
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
        stoogeSort(data, left, right - tmp);//sort 0 ~ 2/3*size
        stoogeSort(data, left + tmp, right);//sort 1/3*size ~ size
        stoogeSort(data, left, right - tmp);//sort 0 ~ 2/3*size
    }
}
void oodEvenSort(int *data, int size)
{
    bool sorted = false;
    while (sorted == false)
    {
        //assume sorted..
        sorted = true;
        //create odd and even
        for (int base = 0; base < 2; base++)
            for (int i = base; i < (size - 1); i += 2)
                if (data[i] > data[i + 1])
                {
                    swap(data[i], data[i + 1]);
                    sorted = false;//sort is not finish
                }
    }
}
void heapSort(int *data, int size)
{
    //initialize heap tree
    int *heap = new int[size + 1];
    //index of root, leaf
    int leaf = 1;

    for (int i = 0; i < size + 1; i++)
        heap[i] = 0;

    //insert data
    for (int i = 0; i < size; i++)
    {
        heap[leaf] = data[i];

        //adjust heap tree
        int tmp = leaf;
        while (heap[tmp / 2] > heap[tmp])
        {
            swap(heap[tmp / 2], heap[tmp]);
            tmp /= 2;
        }
        //update end of leaf
        leaf++;
    }
    //get sorted data
    leaf -= 1;
    for (int i = 0; i < size; i++)
    {
        //shift root and leaf
        swap(heap[1], heap[leaf]);
        //get root
        data[i] = heap[leaf];
        //cut leaf
        leaf--;

        //adjust heap tree
        int tmp = 1;
        while ((tmp * 2 + 1) <= leaf)
        {
            int target;
            if (heap[tmp * 2] < heap[tmp * 2 + 1])
                target = tmp * 2;
            else
                target = tmp * 2 + 1;
            if (heap[tmp] > heap[target])
                swap(heap[tmp], heap[target]);
            tmp = target;
        }

    }
}
void shellSort(int *data, int size)
{
    int gap = size;
    while (gap >= 1)
    {
        for (int shift = 0; shift < gap; shift++)
        {
            int i, j;
            for (i = shift; i < size; i += gap)
            {
                int tmp = data[i];
                //arrange array (move origin data)
                for (j = i; tmp < data[j - gap] && j > shift; j -= gap)
                    data[j] = data[j - gap];
                //insert tmp
                data[j] = tmp;
            }
        }
        gap /= 2;
    }
}
void bogoSort(int *data, int size)
{
    //BIG-MAGIC
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
    case QUICK_SORT:
        quickSort(data, data + size);
        break;
    case COMB_SORT:
        combSort(data, size);
        break;
    case ODD_EVEN_SORT:
        oodEvenSort(data, size);
        break;
    case BINARY_TREE_SORT:
        binaryTreeSort(data, size);
        break;
    case GNOME_SORT:
        gnomeSort(data, size);
        break;
    case HEAP_SORT:
        heapSort(data, size);
        break;
    case SHELL_SORT:
        shellSort(data, size);
        break;
    case STOOGE_SORT:
        stoogeSort(data, 0, size - 1);
        break;
	default:
        bogoSort(data, size);
		break;
	}
	return data;
}