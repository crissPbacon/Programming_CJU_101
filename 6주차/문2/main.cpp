#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>  // important header file to calculate

#define END_COND 999


// generating the seed number using the time clock information
void GenRandSeed()
{
	// generating the random number using the time seed
	srand((unsigned int)(time(NULL)));
	return;
}

// generating the random number
unsigned int GenRandNum(unsigned int nRange)
{
	unsigned int nRes = 0;
	unsigned int nNum = rand();
	nRes = ((unsigned int)(nNum) % (nRange));
	return nRes;
}

int main(void)
{
	int ary[10];
	int nRange = 0;
	int count = 0;
	// assigning seed
	GenRandSeed();

	// initializing variables
	
	while (1)
	{
		// generating the input information
		printf("Input a single number, for generating the random number related to your input:\n");
		printf("if you want to end the loop, please input 999\n");
		scanf_s("%d", &nRange);

		// escaping the while loop
		if (nRange == END_COND)
		{
			printf("end of the infinite while loop...\n");
			break;
		}
		else
		{
			// generating the random number
			int nRes = GenRandNum(nRange);

			// for debugging
			printf("Result:random number generator, %d\n", nRes);
			printf("ary[%d] : %d\n\n", count, nRes);
			ary[count] = nRes;  // i add this part to count and stop generating. ary[10]
			count++;
		}
		if (count == 10)
		{
			printf("ary[10] = {%d %d %d %d %d %d %d %d %d %d}\n\n", ary[0], ary[1], ary[2], ary[3], ary[4], ary[5], ary[6], ary[7], ary[8], ary[9]);
			break;
		}
	}
	

	// formula of average, variance, standard deviation 
	// not int. use double
	double avg = (ary[0] + ary[1] + ary[2] + ary[3] + ary[4] + ary[5] + ary[6] + ary[7] + ary[8] + ary[9]) / 10;
	double var = (pow((avg - ary[0]), 2) + pow((avg - ary[1]), 2) + pow((avg - ary[2]), 2) + pow((avg - ary[3]), 2) + pow((avg - ary[4]), 2) + pow((avg - ary[5]), 2) + pow((avg - ary[6]), 2) + pow((avg - ary[7]), 2) + pow((avg - ary[8]), 2) + pow((avg - ary[9]), 2)) / 10;
	double STdev = sqrt(var);

	printf("AVG : %.1lf\n", avg);
	printf("VAR : %.1lf\n", var);
	printf("StDEV : %.2lf\n", STdev);  // %.1lf is not enough

	system("pause");
	return 0;
}