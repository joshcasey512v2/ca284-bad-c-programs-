#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415


int main(int argc, char const *argv[])
{

	int height, radius;

	if (argc < 2)
	{
		printf("No input given!\n"); 
	}
	else if (argc == 2)
	{
		printf("Two arguments needed!\n"); //previous statements ensure sufficent 
										//arguments are passed
	}

	else
	{
		radius = atoi(argv[1]);
		height = atoi(argv[2]);
		float area = (2 * PI * radius * height) + (2 * PI * radius * (radius));
		if (area < 0)
		{
			printf("The radious or height cannot be negative!\n");
		}
		
		else
		{
			printf("%.2f\n", area);
		}
		/*When sufficiencent arguments are passed the block of code
		above is excecuted checking for negative values or calculating the radious */
	}
	return 0;
}