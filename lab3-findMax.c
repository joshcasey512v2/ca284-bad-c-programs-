#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int lenght = argc;
	int max = 0;
	for (int i = 1; i < lenght; ++i)
	{
		if (max < atoi(argv[i]))
		{
			max = atoi(argv[i]);
		}
	}
	printf("%d\n", max);
	return 0;
}

