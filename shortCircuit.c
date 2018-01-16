#include <stdio.h>
#include <stdlib.h>
/*Program that demonstrates short circuit evaluation
Call two functions that return something, in a logical operator expression.
Print something in  both function.
Return something in the first function that evaluates to FALSE in the expression*/

int additionThreeNumbers(int a, int b, int c);
int subtractionThreeNumbers(int a, int b, int c);

int main()
{

    int a = 1, b = 2, c = 3;
    additionThreeNumbers(a, b, c)==1 && subtractionThreeNumbers(a, b, c)==3;
    return 0;
}

int additionThreeNumbers(int a, int b, int c)
{
    int addition3N = 0;
    addition3N = a + b + c;
    printf("result = %d",addition3N );
    return addition3N;
}

int subtractionThreeNumbers(int a, int b, int c)
{
    int subtraction3N = 0;
    subtraction3N = a - b - c;
    printf("result = %d",subtraction3N );
    return subtraction3N;
}
