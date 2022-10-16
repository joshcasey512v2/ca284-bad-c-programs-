#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int size;
	size = atoi(argv[1]);

	for (int i = 0; i < size; ++i) /*This provides the cap of the square*/
	{
		printf("*");
	}
	printf("\n");

	for (int i = 0; i < size - 2; ++i) //size -2 to account for top and bottom
	{
		for (int i = 0; i < size - 1; ++i)
		{
			if (i == 0 || i == size)
			{
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("*\n");
	}

	for (int i = 0; i < size; ++i) //provides the base of the square
	{
		printf("*");
	}
	printf("\n");
	return 0;
}