/*Write a program that prints the USER, HOME, and PATH environment variables.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("USER : %s\n", getenv("USER"));
    printf("HOME : %s\n", getenv("HOME"));
    printf("PATH : %s\n", getenv("PATH"));
    return 0;
}
