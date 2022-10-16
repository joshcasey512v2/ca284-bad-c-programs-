/*=====> Name: Josh Casey
checks to see if a number is triangular
Date: 06/10/2022
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int triangle(int input, int target);

/*
The triangle sequence is the sum of numbers up to the provided 
integer for this problem
eg. input = 6, 1 + 2 + 3 = 0, therefore its triangular
*/

int main(int argc, char const *argv[])
{
	int input = atoi(argv[1]);
	int target = 0;
	if (input == triangle(input, target))
	 {
	 	printf("%d is a triangular number\n", input);
	 }
	 else
	 {
	 	printf("%d is not a triangular number\n", input);
	 }
	return 0;
}

int triangle(int input, int target)
{
	int i = 0;
	while(target<=input) //while target(a triangular number) is less or
	{					//equal to what we are looking for we will
		target += i;   //increment throught the triangular numbers starting from 0
		i++;
		if (target == input) //input is a triangular number
		{
			//printf("%d is a triangular number\n", input);
			return input;
		}
	}

}