#include "QuickSort.h"
#include <utility>
#include <iostream>
#include "utils/ArrayUtils.h"

using namespace olh;

void olh::QuickSort(int* const array, const int length)
{
    if (length <= 1) return;

    Partition(array, 0, length - 1); 
}

void olh::Partition(int* const array, const int begin, const int end)
{
    int length = end - begin + 1;
    int anchor = end;

    if (length <= 0) return;

    // Debug Input
    // Print(array, begin, length);

    int slowIdx = -1;
    int fastIdx = begin;
    for (; fastIdx < anchor; fastIdx++)
    {
        if (array[fastIdx] < array[anchor])
        {
            slowIdx++;
            std::swap(array[begin + slowIdx], array[fastIdx]);    
        }
    }

    int sortedIdx = -1;
    int leftMost = begin;
    int rightMost = end;
    if (slowIdx < 0)
    {
        if (array[begin] <  array[anchor])
        {
            // The right most item is correct position
            rightMost = end - 1;
            sortedIdx = end;
        }
        else
        {
            // Swap the anchor with the first item greater than it
            // Because the anchor is smallest item
            std::swap(array[begin], array[anchor]);
            leftMost = begin + 1;
            sortedIdx = begin;
        }
    }
    else
    {
        std::swap(array[begin + slowIdx + 1], array[anchor]);
        sortedIdx = begin + slowIdx + 1;
    }
    // Debug Step Output
    // Print(array, begin, length);

    // Recursive Left Sub-Array
    olh::Partition(array, leftMost, sortedIdx - 1);
    // Recursive Right Sub-Array
    olh::Partition(array, sortedIdx + 1, rightMost);
}