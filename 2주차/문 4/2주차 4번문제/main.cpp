#include<stdio.h>

#define LOW 20.0
#define HIGH 25.0

int main(void)
{
	double weight;
	double height;
	double bmi;

	printf("type your weight \n");
	scanf_s("%lf", &weight);
	printf("type your height \n");
	scanf_s("%lf", &height);

	bmi = ((weight) / ((height/100) * (height/100)));

	printf("your bmi is %.1lf \n", bmi);
	

	


	((bmi > LOW) && (bmi < HIGH))
		? printf("normal") : printf("gain or loose your weight..");


	return 0;
	

}