#include <iostream>
#include "sorting/BubbleSort.h"
#include "utils/ArrayUtils.h"
#include "utils/Random.h"
#include "utils/SortingUtils.h"

using namespace olh;
int main(int argc, char* argv[])
{
    InitRandomSeed();

    int length = 100000;
    int* arr = new int[length];
    for (size_t i = 0; i < length; i++)
    {
        arr[i] = RandRange(0, 10000);
    }
    // int length = 5;
    // int* arr = new int[length] { 3, 13, 11, 8, 2 };
    
    Print(arr, length);
    olh::BubbleSort(arr, length);
    // Print(arr, length);
    std::cout << "Sorting result: " << Verify(arr, length) << std::endl;

    std::cout << "The project has been run successfully" << std::endl;
    return 0;
}