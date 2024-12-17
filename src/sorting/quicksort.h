#ifndef QUICK_SORT_H_OLH
#define QUICK_SORT_H_OLH

 /******************************************************
 * File: quicksort.cpp
 * Author: Nguyen Dinh Toan
 * Date: 2024-12-15
 * Description: Implementation of Quick Sort Algorithm
 * Reference: https://www.geeksforgeeks.org/quick-sort-algorithm/
 ******************************************************/

namespace olh
{
    void QuickSort(int* const array, const int length);
    void Partition(int* const array, const int begin, const int end);
}
#endif