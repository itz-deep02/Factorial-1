#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "MyHeader.h"
#include <stdbool.h>

unsigned int factorial(unsigned int fac);

int main()
{
    /* testing code */
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));

    return 0;
}

/* define your function here (don't forget to declare it) */
unsigned int factorial(unsigned int fac)
{
    int result = 0;

    if (fac == 1)
    {
        return 1;
    }
    else if (fac > 1)
    {
        result = fac;

        result *= factorial(fac-1);
    }
    else
    {
        puts("You typed something invalid... Please try again!\n");
    }

    return result;
}
