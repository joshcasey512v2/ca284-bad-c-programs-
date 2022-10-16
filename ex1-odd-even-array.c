/*=====> Name: Josh Casey
A program that subtracts all even numbers
from eachother but adds all odd numbers to eachother
Date: 06/10/2022
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int lenght = argc;
	int eArray[lenght];
	int oArray[lenght];
	int eve = 0;
	int odd = 0;
	int total = 0;

	for (int i = 1; i < lenght; ++i)
	{
		if (atoi(argv[i]) % 2 == 0)//if even
		{
			eArray[eve] = atoi(argv[i]);
			eve++;
		}
		else
		{
			oArray[odd] = atoi(argv[i]);
			odd++;
		}
	}

	for (int i = 0; i < odd; ++i)
	{
		total += oArray[i];
	}
	printf("%d\n",total );

	for (int i = 1; i < eve; ++i)
	{
		eArray[0] -= eArray[i];
	}
	printf("%d\n", eArray[0]);
	return 0;
}