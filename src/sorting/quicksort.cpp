#include "quicksort.h"
#include <utility>
#include <iostream>
#include "utils/ArrayUtils.h"
#include <math.h>

using namespace olh;

void olh::QuickSort(int* const array, const int length)
{
    if (length <= 1) return;

    int leftMost = 0;
    int anchor = leftMost + length - 1;
    int steps = 0;
    Partition(array, length, 0, anchor);    
    
}

void olh::Partition(int* const array, const int length, int begin, int anchor)
{   

    std::cout << "Sorting Partition length: " << length << " anchor: " << anchor << " begin " << begin << std::endl; 
    if (anchor <= 0) return;
    Print(array, begin, length);

    int slowIdx = -1;
    for (int fastIdx = begin; fastIdx < anchor; fastIdx++)
    {
        std::cout << "SlowIdx: " << slowIdx << " FastIdx: " << fastIdx << " FastIdxValue: " << array[fastIdx] << " AchorValue: " << array[anchor] << "::";
        Print(array, begin, length);
        if (array[fastIdx] < array[anchor])
        {
            if (slowIdx < 0)
            {
                slowIdx = begin - 1;
            }
            slowIdx++;
            std::cout << "Swap array[" << slowIdx << "]: " << array[slowIdx] << " array[" << fastIdx << "]: " << array[fastIdx] << "::";
            std::swap(array[slowIdx], array[fastIdx]);
            Print(array, begin, length);    
        }
    }

    slowIdx++;
    std::swap(array[slowIdx], array[anchor]);
    anchor = slowIdx + 1;

    Print(array, begin, length);

    if (anchor > 0)
    {
        // left
        olh::Partition(array, anchor + 1, 0, anchor);
    }
    
    if (length - anchor - 1)
    {
        // rigth
        olh::Partition(array, length - anchor - 1, anchor + 1, length - 1);
    }
}