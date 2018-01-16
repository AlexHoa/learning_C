#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[])
{
// Echo arguments
int i = 0;
for(i =0; i<argc; i++)
{
printf("argument[%d] : %s,length: %ld\n",i,argv[i], strlen(argv[i]));
}

return 0;
}
