/*Write a program that accepts multiple strings.
Copy these strings using strncpy to a large enough buffer (or limit copy length), and remove all leading and trailing spaces.
Print the string lengths before and after the trim operation
Use other functions from string.h should you require them
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE 100

void delTrailingLeadingSpace(const char src[], char dest[]);

int main()
{
    // Declaration
    char s[] = "  this is my string with leading and trailing space";
    char s2[] = "  another test   ";
    char copyS[TAILLE]={0}, trimedS[TAILLE] = {0}, copyS2[TAILLE]={0}, trimedS2[TAILLE] = {0};

    // Copy this string with strncpy
    strncpy(copyS, s, strlen(s));
    strncpy(copyS2, s2, strlen(s2));

    // Trim operation
    delTrailingLeadingSpace(copyS, trimedS);
    delTrailingLeadingSpace(copyS2, trimedS2);

    // String length before / after trim operation
    printf("This is the length of my first string before trim: %d\n", strlen(copyS));
    printf("This is the length of my first string after trim: %d\n", strlen(trimedS));
    printf("This is the length of my second string before trim: %d\n", strlen(copyS2));
    printf("This is the length of my second string after trim: %d\n", strlen(trimedS2));

    return 0;
}

void delTrailingLeadingSpace(const char src[], char dest[])
{
    int i = 0 , j = 0, start = 0, end = 0;

    // Count of the leading space
    for(i=0; src[i]== ' ' ;i++) start++;

    // Count of the trailing space
    for (i = (strlen(src)-1) ; src[i] == ' '; i--) end ++;

    // Trim operation
    for (i= start; i < (strlen(src)-end); i++  )
    {
        dest[j]=src[i];
        j++;
    }
}
