/*Write a program that prints each word of a user-supplied text on a newline.
Use the length safe function fgets to get data from user.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    printf("Enter a sentence\n");
    fgets(s, sizeof s, stdin);
    printf("Your sentence is: %s\n", s);

    return 0;
}
