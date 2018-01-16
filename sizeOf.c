/*Programm that prints the size of most common primitive data types*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Size of integer type %d\n",sizeof(int));
    printf("Size of short integer type %d\n",sizeof(short int));
    printf("Size of long integer type %d\n",sizeof(long int));
    printf("Size of long long integer type %d\n",sizeof(long long int));
    printf("Size of pointer type %d\n",sizeof(void*));
    return 0;
}
