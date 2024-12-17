#include "BubbleSort.h"
#include <utility>

void olh::BubbleSort(int* array, const int length)
{
    if (length <= 1) return;

    // Each pass 1 item will be put to correct position
    for (int pass = 0; pass < length; pass++)
    {
        int slowIdx = 0;
        int fastIdx = 1;
        // Objective is the slowIdx's value always the greatest one
        for (; fastIdx < length; fastIdx++)
        {
            if (array[slowIdx] > array[fastIdx])
            {
                // The slowIdx greater than faster, then swap it and increase slowIdx by one
                std::swap(array[slowIdx], array[fastIdx]);
                slowIdx++;
            }
            else
            {
                // The fastIdx greater then slowIdx, so the slowIdx will be fastIdx
                slowIdx = fastIdx;
            }
        }
    }
}