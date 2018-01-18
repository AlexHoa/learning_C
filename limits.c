/*Write a program that prints limit of your choice from limits.h*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    printf("Minimum value for a signed char: %d\n", SCHAR_MIN);
    printf("Maximum value for a signed char: %d\n", SCHAR_MAX);
    printf("Maximum value for an unsigned char: %d\n", UCHAR_MAX);

    return 0;
}
