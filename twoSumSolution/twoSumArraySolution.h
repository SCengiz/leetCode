#pragma once 
#include<iostream>

class twoSumArraySolution{
private:
    int* givenArray_;
    int target_;
public:
    twoSumArraySolution(int*, int);
    ~twoSumArraySolution();

    const int findGivenArrayLength();
    int* returnResultArray();
};

