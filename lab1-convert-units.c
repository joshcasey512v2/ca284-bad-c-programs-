#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
	int centimeters;
	float inches;
	centimeters = atoi(argv[1]);
	inches = centimeters / 2.54;
	printf("%.2f\n", inches);
	return 0;
}