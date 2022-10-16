#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int length = argc;
	for (int i = 1; i < length; ++i)
	{
		printf("%d\n", atoi(argv[i]));
	}
	return 0;
}