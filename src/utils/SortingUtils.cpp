#include "SortingUtils.h"

bool olh::Verify(const int* array, const int length)
{
    if (length <= 1) return true;

    for (int i = 1; i < length; i++)
    {
        if (array[i - 1] > array[i]) return false;
    }
    return true;
}