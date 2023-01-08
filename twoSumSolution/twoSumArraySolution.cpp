#include "twoSumArraySolution.h"

twoSumArraySolution::twoSumArraySolution(int* givenArray, int target) 
    : givenArray_(givenArray), target_(target) {
    if(!this->givenArray_) {
        std::cout << "givenArray is NULL!" << std::endl;
        exit(1);
    }
}

twoSumArraySolution::~twoSumArraySolution() {
    std::cout << "dTor called for twoSumArraySolution" << std::endl;
}

const int twoSumArraySolution::findGivenArrayLength() {
// We check givenArray pointer is empty or not before in Construcutor.
    int sizeOfGivenArray = 0;
    while(this->givenArray_[sizeOfGivenArray]) {
        ++sizeOfGivenArray;
    }
    return sizeOfGivenArray;
}

int* twoSumArraySolution::returnResultArray()
{
    int* arrayIndexes = new int;
    int sumOfTarget = 0;
    const int SIZE = this->findGivenArrayLength();

    for(int kk = 0; kk < SIZE; kk++) {
        for(int ll = kk + 1; ll < SIZE; ll++) {
            if(this->givenArray_[kk] < this->target_ && 
                (this->givenArray_[kk] + this->givenArray_[ll]) == this->target_) {
                *arrayIndexes = kk;
                *(arrayIndexes + 1) = ll;       
            }
            else {
                arrayIndexes = nullptr;
            }
        }
    }
    return arrayIndexes;
}

