#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int length = argc;
	int dup[10];
	int k = 0;

	for (int i = 1; i < length; ++i)
	{
		for (int j = i + 1; j < length; ++j)
		{
			if (atoi(argv[i]) == atoi(argv[j]))
			{
				dup[k] = atoi(argv[i]);
				k++;
			}
		}
	}
	if (k == 0)
	{
		printf("no duplicated number\n");
	}
	else
	{
		printf("%d\n", dup[0]);
	}
	return 0;
}