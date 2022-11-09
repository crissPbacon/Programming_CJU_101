#include<stdio.h>

void input_data(int* pa, int* pb);
void swap_data(void);
void print_data(int a, int b);
int a, b;

int main(void)
{
	input_data(&a, &b);
	swap_data();
	print_data(a, b);
	return 0;
}

void input_data(int* ap, int* bp)
{
	int a, b = 0;
	printf("input 2 numbers\n");
	scanf_s("%d %d", ap, bp);		//  입력
}


void swap_data(void)
{
	int k;		//  자리 마련해두고 하나씩 바꿈
	k = a;
	a = b;
	b = k;
}


void print_data(int a, int b)
{
	printf("변환값 : %d %d", a, b);
}

		//  10, 20 입력 , 20, 10 출력