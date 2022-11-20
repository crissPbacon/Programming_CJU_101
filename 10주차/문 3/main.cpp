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
	printf("바사삭의 가격 : %s\n", BASASAK.price);
	printf("바사삭의 열량 : %s\n", BASASAK.calories);
	return 0;
}
