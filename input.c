/*Write a program that asks a user for 10 numbers and prints out the maximum of those numbers*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define TAILLE 10

int maxValue (int tab[]);

int main()
{
    // Declaration of the variable
    int i = 0;
    int values[TAILLE]={0};

    // Get the 10 numbers
    for (i=0; i<TAILLE; i++)
    {
        printf("Enter the number %d\n", i+1);
        scanf("%d", &values[i]);
    }

    // Find the max of the 10 numbers
    printf("Maximum value is %d\n", maxValue(values));
    return 0;
}

int maxValue (int tab[TAILLE])
{
    int i = 0, max = 0;
    for (i=0; i<TAILLE; i++)
    {
        if(tab[i] > max) max = tab[i] ;
    }
    return max;
}
