#include <stdio.h>
#include <stdlib.h>
/* program that tests if a number is a prime number or not*/

int main()
{
    int i=0, numberToTest = 0, test =0;
    printf("Enter a number to test:\n");
    scanf("%d", &numberToTest);
    for(i =2; i<numberToTest ; i++)
    {
        if (numberToTest%i == 0) test++;
    }
    if(test != 0) printf("This is not a prime number\n");
    else printf("This is a prime number\n");
    return 0;
}
