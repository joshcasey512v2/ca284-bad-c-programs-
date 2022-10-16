#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float multiply(float num1, float num2);
float divide(float num1, float num2);

int main(int argc, char const *argv[])
{
	float num1 = atof(argv[2]);
	float num2 = atof(argv[3]);

	if (strcmp(argv[1], "multiply") == 0)
	{
		printf("%f\n", multiply(num1, num2));
	}
	else if (strcmp(argv[1], "divide") == 0)
	{
		if (num2 == 0)
		{
			printf("invalid\n");
		}
		else
		{
		printf("%f\n", divide(num1, num2));
		}
	}
	else
	{
		printf("Invalid!\n");
	}
	return 0;
}

float multiply(float a, float b)
{
	return a*b;
}

float divide(float a, float b)
{
	return a/b;
}