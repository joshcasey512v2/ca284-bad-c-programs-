#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int start = atoi(argv[1]);
	int end = atoi(argv[2]);

	for (int i = start; i <= end; i++)
	{
		if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
		{
			printf("%d\n", i);
		}
	}


	return 0;
}