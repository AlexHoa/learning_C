/*Program that tests if a number is an armstrong number or not*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*****************************Warning, there is a problem with 153, other number are ok**********************************/
void ArmstrongTester(char numberToTest[]);

int main()
{
    ArmstrongTester("8208");
    return 0;
}

void ArmstrongTester(char numberToTest[])
{
    int i=0, digit =0, result =0, length =0, intNumberTotest=0, test = 0;
    char c[1];
    char *ptr1, *ptr2;
    length = strlen(numberToTest);
    intNumberTotest = strtol(numberToTest,&ptr2,10);
    for(i =0; i<length; i++)
    {
        c[0]=numberToTest[i];
        digit = strtol(c,&ptr1,10);
        result += pow(digit, length);
        test = pow(digit, length);
    }


    if (intNumberTotest == result) printf("This is a armstrong number\n");
    else printf("This is not an armstrong number\n");

}
