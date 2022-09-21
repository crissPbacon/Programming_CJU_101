#include<stdio.h>

int main(void)
{
	char ch;
	printf("type letter : ");
	scanf_s("%c", &ch);
	printf("%c's code nomber is : %d \n", ch, ch);
	
	return 0;

}