#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int list[10];
	int counter = 0;

	for (int i = 1; i < argc; ++i)
	{
		list[i] = atoi(argv[i]);
	}
	for (int i = 1; i < argc; ++i)
	{
		if (list[i] % 2 == 0) //checks to see if even
		{
			printf("%d - %d\n", i - 1, list[i]);
			counter += 1; //count all the even numbers
		}
	}
	if (counter == 0) //if the counter is zero no even numbers exist in array
	{
		printf("Not found!\n");
	}
	return 0;
}