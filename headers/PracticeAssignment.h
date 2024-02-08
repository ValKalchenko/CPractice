// pre-processor directives

// create macro values (constants)
#define END 1

// create macro expressions (constants)
#define REPEAT(i) (i > END)

// include C header file
#include <stdio.h>

// declare global variables 
static int six = 6;
static int five = 5;
static int four = 4;

// function declarations
int factorial (int);
int factorialReference (int *);