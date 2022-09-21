#include<stdio.h>

int main(void)
{
	int kor = 3;
	int eng = 5;
	int mat = 4;
	int credits = 3+5+4;

	double korscore = 3.8;
	double engscore = 4.4;
	double matscore = 3.9;
	double grade = ((kor*korscore)+(eng*engscore)+(mat*matscore));
	double AVG = grade / credits;

	printf("AVG : %.1lf\n", AVG); // int score & grade to find out AVG grade. AVG grade is 4.1

	int res;

	res = (credits > 10) && (AVG > 4.0);
	printf("(credits > 10), (AVG > 4.0 : %d \n", res); // to find out true or false. ans is true


	return 0;

}