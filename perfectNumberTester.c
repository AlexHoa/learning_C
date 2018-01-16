#include <stdio.h>
#include <stdlib.h>
/*Program that tests if a number is a perfect number  or not*/
int main()
{
    //initialise variables
    int i = 0, numberToTest =0, sum =0;

    printf("Enter a number to test:\n");
    scanf("%d",&numberToTest);

    // first step: get all the divisors and sum them
    for (i = 1; i<numberToTest ;i++)
    {
        if (numberToTest%i == 0) sum+=i;
    }
     // compare it to the number
    if (sum == numberToTest) printf("This is a perfect number\n");
    else printf("This is not a perfect number\n");
    return 0;
}
