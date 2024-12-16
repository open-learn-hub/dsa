 /******************************************************
 * File: random.cpp
 * Author: Nguyen Dinh Toan
 * Date: 2024-12-16
 * Description: 
 * Reference:
 ******************************************************/
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "Random.h"

void olh::InitRandomSeed()
{
    srand (time(NULL));
}

void olh::InitRandomSeed(int seed)
{
    srand (seed);
}

int olh::RandRange(int max)
{
    return rand() % max;
}

int olh::RandRange(int min, int max)
{
    return rand() % abs(max - min) + min;
}

float olh::RandFloat(float min, float max)
{
    return ((float)rand() / (float)RAND_MAX) * (max - min) + min;
}