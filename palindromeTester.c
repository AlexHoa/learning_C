/*Program that tests if a word is a palyndrome or not*/
/*Words to test:
ABBA
SOS
SOs
Kayak
Satanoscillatemymetallicsonatas*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *wordToTesT;
char copyWordToTest[50], reversedUpperWord[50];
int main()
{   int i =0, j=0, length =0;
    wordToTesT = "Satanoscillatemymetallicsonatas";

    // First step : copy the string in order to not modify the original one
    strcpy(copyWordToTest, wordToTesT);

    // Second step : put every character as upper characters
    while(copyWordToTest[i]!='\0')
    {
        copyWordToTest[i]=toupper(copyWordToTest[i]);
        i++;
    }
    // Third step: reverse the chain obtain after upper step
    while (i>=0)
    {
        reversedUpperWord[j]=copyWordToTest[i-1];
        i--;
        j++;
    }
        j--;
    // Fourth step: compare the upper chain and the reversed chain
    for (i=0; i<j; i++)
    {
        if(reversedUpperWord[i]==copyWordToTest[i])
        {
            if(i==j-1)
            {
                printf("This is a palyndrome\n");
            }
        }
        else
        {
            printf("This is not a palyndrome\n");
            break;
        }

    }
    return 0;
}
