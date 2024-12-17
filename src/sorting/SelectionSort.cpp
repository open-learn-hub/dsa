#include "SelectionSort.h"
#include <utility>

void olh::SelectionSort(int* const array, const int length)
{
    if (length <= 1) return;


    for (int i = 0; i < length; i++)
    {
        int minIdx = i;
        // Find minIdx
        for (int min = minIdx; min < length; min++)
        {
            if (array[min] < array[minIdx])
            {
                minIdx = min;
            }
        }
        // Swap minIdx with i (the current sorting index)
        std::swap(array[i], array[minIdx]);
    }
}