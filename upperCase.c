#include <stdio.h>
#include <stdlib.h>
/*Program that converts all strings arguments to upper case without using constant number, magic number or the toupper function*/
char lowerCase[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char upperCase[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int main()
{
    char s[]="test";
    int i =0, j=0 , number = 0;
    for (i=0; s[i]!='\0';i++)
    {
        for (j=0; j<26;j++ )
        if (s[i]==lowerCase[j])
        {
            s[i]= upperCase[j];
        }
    }
    printf("%s\n", s);
    return 0;
}
