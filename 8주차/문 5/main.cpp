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
	scanf_s("%d %d", ap, bp);		//  �Է�
}


void swap_data(void)
{
	int k;		//  �ڸ� �����صΰ� �ϳ��� �ٲ�
	k = a;
	a = b;
	b = k;
}


void print_data(int a, int b)
{
	printf("��ȯ�� : %d %d", a, b);
}

		//  10, 20 �Է� , 20, 10 ���