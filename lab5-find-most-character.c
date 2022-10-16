#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	char sentance[argc];
	strcpy(sentance, argv[1]);

	for (int i = 0; i < strlen(sentance); ++i)
	{
		printf("%c\n", sentance[i]);
	}
	
	return 0;
}
