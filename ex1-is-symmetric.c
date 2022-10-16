/*=====> Name: Josh Casey
Checks to see if a string is symmetric
Date: 06/10/2022
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, char const *argv[])
{
	int length = argc;
	char array[length];
	char rArray[length];
	int j = 0;
	int count = 0;

	for (int i = strlen(argv[1]) - 1; i >=0 ; --i)
	{
		rArray[j] = argv[1][i];
		j++;
	}
	rArray[j] = '\0';

	for (int i = 0; i < strlen(argv[1]); ++i)
	{
		array[i] = argv[1][i];
	}

	for (int i = 0; i < strlen(argv[1]); ++i)
	{
		if (array[i] == rArray[i])
		{
			count++;
		}
		else
		{
			count = 0;
		}
	}
	if (count == strlen(argv[1]))
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;	
}