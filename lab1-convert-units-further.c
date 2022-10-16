#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
	int upper, lower;
	float inches;
	upper = 50;
	lower = 30;
	inches = 2.54;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%.2f ", lower / inches);
			lower++;
		}
		printf("\n");
	}

	return 0;
}
