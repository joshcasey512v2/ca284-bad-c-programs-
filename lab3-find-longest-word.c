#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char argv[])
{
	char string[50] = argv[1];
	fgets(argv[1], sizeof(argv[1]), argv[1]);
	printf("%s\n", string);
	return 0;
}