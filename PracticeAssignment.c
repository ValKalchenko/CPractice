// pre-processor directives
#include "./headers/PracticeAssignment.h"

// write code for functions declared in PracticeAssignment.h
int factorial (int n){

    int result = 1;
    for (int i = 1; i <= n; ++i){
        result *= i;

        if (REPEAT(i)){
            continue;
        }

    }
    return result;
}

int factorialReference (int *n){
    int result = 1;
    for (int i = 1; i <= *n; ++i) {
        result *= i;
    }
    return result;
}