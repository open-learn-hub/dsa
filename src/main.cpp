#include <iostream>
#include "sorting/quicksort.h"
#include "utils/ArrayUtils.h"
#include "utils/Random.h"

using namespace olh;
int main(int argc, char* argv[])
{
    InitRandomSeed(20);

    // int length = 10;
    // int* arr = new int[length];
    // for (size_t i = 0; i < length; i++)
    // {
    //     arr[i] = RandRange(0, 20);
    // }
    int length = 5;
    int* arr = new int[length] { 3, 13, 11, 8, 2 };
    
    Print(arr, length);
    int mostLeft = 0;
    olh::QuickSort(arr, length);
    Print(arr, length);

    std::cout << "The project has been run successfully" << std::endl;
    return 0;
}