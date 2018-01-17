/*Write a program that accepts multiple strings.
Copy these strings using strncpy to a large enough buffer (or limit copy length), and remove all leading and trailing spaces.
Print the string lengths before and after the trim operation
Use other functions from string.h should you require them
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE 50

void delTrailingLeadingSpace(char src[TAILLE], char dest[TAILLE]);

int main()
{
    // Declaration of the strings
    char s1[TAILLE]= "  This is my first string   ";
    char s2[TAILLE]= "This is my second string";
    char cs1[TAILLE], cs2[TAILLE], cst1[TAILLE], cst2[TAILLE] ;

    // Copy of the strings
    strncpy(cs1, s1, 25);
    strncpy(cs2, s2, 25);

    //Print the strings lengths before the trim operation
    printf("First string length before trim operation: %d \n", strlen(cs1));
    printf("Second string length before trim operation: %d \n", strlen(cs2));

    // Remove all leading and trailing spaces
    delTrailingLeadingSpace(cs1, cst1);
    delTrailingLeadingSpace(cs2, cst2);

    //Print the strings lengths after the trim operation
    printf("First string length after trim operation: %d \n", strlen(cst1));
    printf("Second string length after trim operation: %d \n", strlen(cst2));

    return 0;
}


// Function that delete trailing and leading space
void delTrailingLeadingSpace(char src[TAILLE], char dest[TAILLE])
{
    int i = 0, j=0, start = 0, end = 0, t =0;
    for (i=0; src[i] == ' '; i++) start++;
    for (i=(strlen(src)-2); src[i] == ' '; i--) end++;
    t = strlen(src)-end;
    for (i = start; i<t ; i++)
    {
        dest[j]= src[i];
        j++;
    }

}
