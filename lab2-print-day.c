#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int day;
	day = atoi(argv[1]);

	switch(day)
	{
		case 2:
			printf("Monday\n");
			break;

		case 3:
			printf("Tuesday\n");
			break;

		case 4:
			printf("Wednesday\n");
			break;

		case 5:
			printf("Thursday\n");
			break;

		case 6:
			printf("Friday\n");
			break;

		case 7:
			printf("Saturday\n");
			break;

		case 1:
			printf("Sunday\n");
			break;
	}

	return 0;
}