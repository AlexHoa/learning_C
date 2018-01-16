#include <stdio.h>

int main(int argc, char* argv[])
{

// Hello Tass
printf("Hello world!\n");

// Echo program name
printf("Executable name:%s\n", argv[0]);

// Echo arguments
int i = 0;
for(i =0; i<argc; i++)
{
printf("arguments : %s\n", argv[i]);
}
// Echo arguments v2: without the name of the executable

for(i =1; i<argc; i++)
{
printf("arguments without the name of the executable %s\n", argv[i]);
}

// Reverse echo arguments
for(i =argc-1; i>0; i--)
{
printf("reverse echo argument :%s\n", argv[i]);
}

return 0;
}


