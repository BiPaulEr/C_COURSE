#include <stdio.h>
#include <stdlib.h>

unsigned char x;

int main()
{

for (x = 0; x < 128; x++)
{
	printf("Le code ASCII %d correspond au caractere %c\n", x, x);
}

 exit(EXIT_SUCCESS);
}