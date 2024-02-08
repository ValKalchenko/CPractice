// pre-processor directives
#include "PracticeAssignment.c"

// write code for main function
int main(void){
    printf("VARIABLES\n");
    printf("The factorial of %d is %d\n", six, factorial(six));
    printf("The factorial of %d is %d\n", five, factorial(five));
    printf("The factorial of %d is %d\n", four, factorial(four));
    printf("\n");
    printf("POINTERS\n");
    printf("The factorial of %d is %d\n", six, factorialReference(&six));
    printf("The factorial of %d is %d\n", five, factorialReference(&five));
    printf("The factorial of %d is %d\n", four, factorialReference(&four));
}
