#include<stdint.h>
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

typedef struct factoriel {
    int* arr;
    int size;
    void (*setArr)(struct factoriel*, int*);
    void (*setSize)(struct factoriel*);
    int (*factoriel)(struct factoriel*);
} factoriel;

int findFactorielOfPermutationsArray(struct factoriel* instance) {
    instance->size -= 1;
    if(instance->size == 0) {
        return 1;
    }
    else {
        return (instance->size + 1) * (findFactorielOfPermutationsArray(instance));
    }
}

void settingArrayToPermutations(struct factoriel* instance, int* array) {
    instance->arr = array;
}

void settingArraySizeOfPermutations(struct factoriel* instance) {
    instance->size = 0;
    while(instance->arr[instance->size]) {
        instance->size++;
    }
}

int main() {
    const int SZ = 3;
    int* arr = calloc(sizeof(int), 3);
    int kk = 0;
    printf("Array allocation done!\n");
    for(; kk < SZ; ++kk) {
        arr[kk] = kk + 1;
        printf("arr[%d]: %d\n",kk, arr[kk]);
    }

    factoriel* p = malloc(sizeof(factoriel));
    p->setArr = settingArrayToPermutations;
    p->setSize = settingArraySizeOfPermutations;
    p->setArr(p, arr);
    p->setSize(p);
    p->factoriel = findFactorielOfPermutationsArray;
    printf("Array size: %d\nFactoriel of Array Size: %d", p->size, p->factoriel(p));

    free(p);
// If i do free arr. I have double free Error!
//    free(arr);
    return 0;
}

