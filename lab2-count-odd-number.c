#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int list[10];
	int counter = 0;

	for (int i = 1; i < argc; ++i)
	{
		list[i] = atoi(argv[i]);
	}
	for (int i = 1; i < argc; ++i)
	{
		if (list[i] % 2 == 1)
		{
			counter += 1;
		}
	}
	printf("%d\n", counter);
	return 0;
}