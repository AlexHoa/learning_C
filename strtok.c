/*
Write a program using strtok. Use subject and delimiter like :
char target[]:"0,2,3:Moredata;";
char delimiters[]:";:";
Print the individual token got from strtok
After got all tokens, print out target.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   // Declaration of the subject and the delimiters
   char target[] = "0,2,3:Moredata;";
   char delimiters[] = ";:";
   char *tokenGot;

   // Print of the individual token got from strtok
     tokenGot = strtok(target, delimiters);
     while(tokenGot != NULL)
     {
         printf("%s\n", tokenGot);
         tokenGot = strtok(NULL, delimiters);
     }

   return 0;
}
