#ifndef RANDOM_H_OLH
#define RANDOM_H_OLH

 /******************************************************
 * File: utils.h
 * Author: Nguyen Dinh Toan
 * Date: 2024-12-16
 * Description: 
 * Reference:
 ******************************************************/

namespace olh
{
    void InitRandomSeed();
    void InitRandomSeed(int seed);
    int RandRange(int max);
    int RandRange(int min, int max);
    float RandFloat(float min, float max);
}
#endif