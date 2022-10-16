/*=====> Name: Josh Casey
A program that returns the smallest or largest number
based on the first argument give
Date: 06/10/2022
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float max(float arr[], int lenght);
float min(float arr[], int lenght);

int main(int argc, char const *argv[])
{
	int lenght = argc;
	float arr[lenght]; //set an array to the lenght of the arguments given

	for (int i = 2; i < lenght; ++i)
	{
		arr[i] = atof(argv[i]); //assign numbers into array
	}

	if (strcmp(argv[1], "largest") == 0) //check argumets to see what function to use
	{
		printf("%.2f\n", max(arr, lenght));
	}
	if (strcmp(argv[1], "smallest") == 0)
	{
		printf("%.2f\n", min(arr, lenght));
	}

	return 0;
}

float max(float arr[], int lenght) //A function given 2 arguments
{								  // to get the max number in an array
	float max = 0;
	for (int i = 2; i < lenght; ++i) //itterate through array
	{
		if (arr[i] > max) //compare each item in array with previous max
		{
			max = arr[i]; //if its bigger it becomes the new max
		}
	 }
	return max;
}

float min(float arr[], int lenght) //same idea as above but returns the min
{
	float min = arr[2];
	for (int i = 2; i < lenght; ++i)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
