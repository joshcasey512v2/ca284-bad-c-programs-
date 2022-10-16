/*=====> Name: Josh Casey
outputs the hailstone sequence from a given input
Date: 06/10/2022
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hail(int input);

int main(int argc, char const *argv[])
{
	int input = atoi(argv[1]);
	printf("%d", input);
	hail(input);
	printf("\n");
	return 0;
}

int hail(int input) //this is a recursive function with one input
{
	if (input > 1) //function continues until 1 or 0 is reached
	{
		if (input % 2 == 0) //checks if even
		{
			input = input / 2;
			printf(" %d", input);
			hail(input); //function is then being called again on new input
		}
		else
		{
			input = (input*3) + 1; //if its odd this executes
			printf(" %d", input);
			hail(input);
		}
	}
}
