#include<stdio.h>
#include<stdlib.h>


struct cracker
{
	char price[50];
	char calories[50];
};

int main(void)
{
	struct cracker BASASAK;
	printf("input price and calories of BASASAK... : ");
	scanf_s("%s %s", BASASAK.price, 50, BASASAK.calories, 50);
	printf("�ٻ���� ���� : %s\n", BASASAK.price);
	printf("�ٻ���� ���� : %s\n", BASASAK.calories);
	return 0;
}
