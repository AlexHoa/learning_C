/*Write a program which converts strings of hexadecimal digits to its equivalent integer value.
Support an optionnal 0x or 0X
Support both a to f and A to F
This function already exist in the standard libraries but the exercise is to implement this by hand.
However, it is possible to use support function like strlen*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // Declaration of the variables
    char hexDigits[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    char intDigits[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    char test[] = "0x2";
    int i =0, result =0;

    // condition: it has to be an hexadecimal
    if ((strlen(test) == 3 ) && (test[0] =='0') && ((test[1]=='0') || (test[1]=='x')))
    {
        // upperCase of the hexadecimal digit to support a to f and A to F
        test[2] = toupper(test[2]);

        // Conversion
        for(i=0; i<=16;i++)
        {
            if(test[2] == hexDigits[i])
            {
                result = intDigits[i];
                break;
            }
        }
        printf("hexadecimal: %s = decimal: %d\n", test, result);
    }
    else printf("This is not an hexadecimal\n");

    return 0;
}
