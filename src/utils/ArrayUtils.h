#ifndef ARRAY_UTILS_H_OLH
#define ARRAY_UTILS_H_OLH

 /******************************************************
 * File: ArrayUtils.h
 * Author: Nguyen Dinh Toan
 * Date: 2024-12-16
 * Description:
 * Reference:
 ******************************************************/
#include <iostream>

namespace olh
{
    template<typename T>
    void Print(const T* const arr, const int length)
    {
        std::cout << "[";
        for (int i = 0; i < length; i++)
        {
            if (i < length - 1)
            {
                std::cout << arr[i] << ";";
            }
            else
            {
                std::cout << arr[i];
            }
        }
        std::cout << "]" << std::endl;
    }

    template<typename T>
    void Print(const T* const arr, const int startIdx, const int length)
    {
        std::cout << "[";
        for (int i = 0; i < length; i++)
        {
            if (i < length - 1)
            {
                std::cout << arr[startIdx + i] << ";";
            }
            else
            {
                std::cout << arr[startIdx + i];
            }
        }
        std::cout << "]" << std::endl;
    }
}
#endif