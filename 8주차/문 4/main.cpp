#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void add_by_pointer(int* pa, int* pb, int* pr)
{
	*pr = *pa + *pb;		//  �ּҰ� �ƴ�, ���� �����ؾ���.
}


int main(void)
{
	int a = 10;
	int b = 20;
	int res = 0;
	add_by_pointer(&a, &b, &res);
	printf("%d", res);
	return 0;

}