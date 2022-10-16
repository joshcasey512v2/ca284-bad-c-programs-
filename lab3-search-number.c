#include <stdio.h>
#include <stdlib.h>

int search(int array[], int lenght, int target);

int main(int argc, char const *argv[])
{
	int lenght, target;
	lenght = argc;
	target = atoi(argv[1]);
	int numbers[lenght - 2];


	for (int i = 2; i < lenght; ++i)
	{
		numbers[i] = atoi(argv[i]); //all the arguments exist in the array
	}

	printf("Found %d at %d\n", search(numbers, lenght, target));


	return 0;
}

int search(int array[], int lenght, int target)
{
	for (int i = 2; i < lenght; ++i)
	{
		if (target == array[i])
		{
			return target, i-2;
		}
	}
}