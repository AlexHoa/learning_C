/*Write a program that prints a horizontal histogram of the amount of numbers,
lower case, uppercase, and special characters in its string arguments */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void histNums (int nums);
void histupper (int upper);
void histlower (int lower);
void histSpecial (int special);


int main(int argc, char* argv[])
{
    int  i=0, j=0, k=0,nums=0, upper = 0, lower = 0, special =0;
    char *s;
    // count of the the different type of character
    for(i =0; i<argc; i++)
    {
        printf("argument[%d] : %s\n",i,argv[i]);
        s= argv[i];
        j=0, k=0,nums=0, upper = 0, lower = 0, special =0 ;

        while(s[j]!='\0')
        {
            k = s[j];
            // nums: table ASCII 47 < n < 58
            if ( k > 47 && k < 58 ) nums++;

            // upper: table ASCII 64 < n < 91
            else if ( k > 64 && k < 91 ) upper++;

            // lower: table ASCII 96 < n < 123
            else if ( k > 96 && k < 123 ) lower++;

            // special
            else special++;

            j++;
        }

        // print the histogram

        histNums (nums);
        histupper (upper);
        histlower (lower);
        histSpecial (special);
        printf("\n");

    }

    return 0;
}

void histNums (int nums)
{
    int l = 0;
    printf("nums:    |");
    for (l=0; l<nums; l++)
    {
        printf("-");
    }
}

void histupper (int upper)
{
    int l = 0;
    printf("\nupper:   |");
    for (l=0; l<upper; l++)
    {
        printf("-");
    }
}

void histlower (int lower)
{
    int l = 0;
    printf("\nlower:   |");
    for (l=0; l<lower; l++)
    {
        printf("-");
    }
}

void histSpecial (int special)
{
    int l = 0;
    printf("\nspecial: |");
    for (l=0; l<special; l++)
    {
        printf("-");
    }
}
