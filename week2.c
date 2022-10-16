//arrays and loops
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int length = 10; //declare lenght of the array
	int grades[length]; //items in array must be same data type
	double values[4] =  {3.4, 3, 6.4, 4.6};

	int numbers2D[3][4] = {

		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}

	};
	printf("%d\n", numbers2D[0][0]);

	return 0;
}