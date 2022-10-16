/*Hopefully this shall sort an array
---->Josh @20:34 @08/10/2022
Lets go*/

#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
	int lenght = argc;
	int array[lenght - 1];

	for (int i = 1; i < lenght; ++i)
	{
		array[i] = atoi(argv[i]); //puts arguments into an array
	}

	for (int i = 1; i < lenght; ++i)
	{
		for (int j = i + 1; j < lenght; ++j)
		{
			if (array[i] > array[j])
			{
				int tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
	}

	for (int i = 1; i < lenght; ++i)
	{
		printf("%d\n", array[i]);
	}

	return 0;
}

