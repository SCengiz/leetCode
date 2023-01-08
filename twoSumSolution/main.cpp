#include<iostream>
#include<memory>
#include"twoSumArraySolution.h"

int main(int argc, char* argv[]){
    int testTarget = 6;
    int inputArray[] = {3, 3};

    const int SIZE = sizeof(inputArray)/sizeof(inputArray[0]);
    int kk = 0;
    std::cout << "INPUT ARRAY: ";
    std::cout << "[";
    for(const auto& it : inputArray) {
        std::cout << it;
        if(kk != SIZE - 1) {
            std::cout << ",";
        }
        ++kk;
    }
    std::cout << "]" << std::endl;
    std::cout << "INPUT TARGET: " << testTarget << std::endl;

/*    NOTE: Take input array from user.
    int* testArray = new int;
    int kk = 0;
    while(std::cin >> testArray[kk]) {
        if(testArray[kk] == 0) {
            std::cout << "Array Ready!" << std::endl;
            break;
        }
        ++kk;
    }

    std::cout << "givenArray" << std::endl;
    for(auto ll = 0; ll < kk; ++ll) {
        std::cout << testArray[ll] << std::endl;
    }
*/
    int* testArray = new int;
    for(kk = 0; kk < SIZE; ++kk) {
        testArray[kk] = inputArray[kk];
    }
    std::shared_ptr<twoSumArraySolution> testInstance
        = std::make_shared<twoSumArraySolution>(testArray, testTarget);

    auto outputArray = testInstance->returnResultArray();
    if(outputArray) {
        std::cout << "OUTPUT ARRAY: " << "[" << *outputArray 
                  << "," << *(outputArray + 1) << "]" << std::endl;
    }

    delete[] testArray;
    return 0;
}