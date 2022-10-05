#include<stdio.h>

int main(void)
{
	double A=0;
	int j = 1;

	printf("input any number... \n");
	scanf_s("%lf", &A);  // A * 1,2,3,4,5,6,7,8,9



	for (j = 1; j <= 9; j++)  // *1 ~ *9
	{
		printf("%.1lf * %d = %.1lf \n", A, j, A*j);  // A * 1~9 = @@
	}
	printf("---------- \n");

	return 0;

}