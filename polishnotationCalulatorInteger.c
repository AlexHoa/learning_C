#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Simple calculator that accepts instruction in 'Polish notation' (as known as prefix notation) for integer numbers
accepted operation: addition, subtraction, multiplication, division, modulus, bitwise operator AND, bitwise operator OR
Print an error and exit when:
There is less than 2 operands to the operator
Length of operator string is not 1
An unsupported operator is provided
*/

void polishNotationAddition(char operands[]);
void polishNotationSubtraction(char operands[]);
void polishNotationMultiplication(char operands[]);
void polishNotationDivision(char operands[]);
void polishNotationModulo(char operands[]);
void polishNotationBitwiseAND(char operands[]);
void polishNotationBitwiseOR(char operands[]);
char numberstoCalculate[];
char theOperator[];

int main()
{
    printf("Enter the operation you want to perform: addition: +, subtraction: -, modulo %, multiplication *, division /, bitwise operation and &,bitwise operation OR !\n");
    gets(theOperator);
    if (strlen(theOperator)==1)
    {
        printf("Enter several number to add exemple 2 3 5:\n");
        gets(numberstoCalculate);
        if(strlen(numberstoCalculate)>1)
        {
          if(theOperator[0]=='+')
        {
            polishNotationAddition(numberstoCalculate);
        }

        else if(theOperator[0]=='-')
        {
            polishNotationSubtraction(numberstoCalculate);
        }

        else if(theOperator[0]=='*')
        {
            polishNotationMultiplication(numberstoCalculate);
        }

        else if(theOperator[0]=='/')
        {
            polishNotationDivision(numberstoCalculate);
        }

        else if(theOperator[0]=='%')
        {
            polishNotationModulo(numberstoCalculate);
        }

        else if (theOperator[0]=='&')
        {
            polishNotationBitwiseAND(numberstoCalculate);
        }
        else if (theOperator[0]=='|')
        {
            polishNotationBitwiseOR(numberstoCalculate);
        }
        else printf("error: unsupported operator\n");
    }
        else printf("Error: numbers missing\n");
    }
    else printf("Error: incorrect number of operator\n");
    return 0;
}

void polishNotationAddition(char operands[])
{   int i=0, number=0, addition =0;
    char c[1];
    char *endoperands;
    for(i=0; i<strlen(operands); i++)
    {
        if (operands[i] != ' ')
        {
            c[0] = operands[i];
            number = strtol(c, &endoperands, 10);
            addition+=number;
        }
    }
    printf("+ %s = %d\n",operands, addition);
}

void polishNotationSubtraction(char operands[])
{
    int i =0, number =0,  subtraction =0;
    char c[1];
    char *endoperands;
    for (i=0; i<strlen(operands); i++)
    {
        if (operands[i]!=' ')
        {
            c[0]=operands[i];
            number = strtol(c, &endoperands, 10);
            printf("%d\n", number);
            if (i == 0) subtraction = number;
            else subtraction -= number;
        }
    }
    printf("- %s = %d\n",operands, subtraction);
}


void polishNotationMultiplication(char operands[])
{   int i=0, number=0, multiplication =0;
    char c[1];
    char *endoperands;
    for(i=0; i<strlen(operands); i++)
    {
        if (operands[i] != ' ')
        {
            c[0] = operands[i];
            number = strtol(c, &endoperands, 10);
            if (i == 0) multiplication = number;
            else multiplication *= number;
        }
    }
    printf("* %s = %d\n",operands, multiplication);
}

void polishNotationDivision(char operands[])
{   int i=0, number=0, division =0;
    char c[1];
    char *endoperands;
    for(i=0; i<strlen(operands); i++)
    {
        if (operands[i] != ' ')
        {
            c[0] = operands[i];
            number = strtol(c, &endoperands, 10);
            if (i == 0) division = number;
            else if (number == 0)
            {
                printf("error : Impossible to divide by \n");
                break;
            }
            else division /= number;
        }
    }
    printf("/ %s = %d\n",operands, division);
}

void polishNotationModulo(char operands[])
{   int i=0, number=0, modulo =0;
    char c[1];
    char *endoperands;
    for(i=0; i<strlen(operands); i++)
    {
        if (operands[i] != ' ')
        {
            c[0] = operands[i];
            number = strtol(c, &endoperands, 10);
            if (i == 0) modulo = number;
            else modulo %= number;
        }
    }
    printf("%% %s = %d\n",operands, modulo);
}

void polishNotationBitwiseAND(char operands[])
{   int i=0, number=0, andResult =0;
    char c[1];
    char *endoperands;
    for(i=0; i<strlen(operands); i++)
    {
        if (operands[i] != ' ')
        {
            c[0] = operands[i];
            number = strtol(c, &endoperands, 10);
            if (i == 0) andResult = number;
            else andResult &= number;
        }
    }
    printf("& %s = %d\n",operands, andResult);
}

void polishNotationBitwiseOR(char operands[])
{   int i=0, number=0, OrResult =0;
    char c[1];
    char *endoperands;
    for(i=0; i<strlen(operands); i++)
    {
        if (operands[i] != ' ')
        {
            c[0] = operands[i];
            number = strtol(c, &endoperands, 10);
            if (i == 0) OrResult = number;
            else OrResult |= number;
        }
    }
    printf("| %s = %d\n",operands, OrResult);
}
