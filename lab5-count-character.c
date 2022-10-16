#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ignore this submission, pointers/functions will be implemented shortly
int main(int argc, char const *argv[])
{
	int count = 0;
	char target[1];
	char sentance[argc];
	strcpy(target, argv[1]);
	strcpy(sentance, argv[2]);


	for (int i = 0; i < strlen(sentance); ++i)
	{
		if (*target == sentance[i])
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}