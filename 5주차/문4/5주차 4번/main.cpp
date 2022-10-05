#include<stdio.h>

int rec_func(int n);  //  rec_func 라는 함수 선언


int main(void)  // 메인 동작을 할 위치
{
	int n;
	printf("input natural number under 100...\n\n\n");
	scanf_s("%d", &n);

	printf("%d! =  %d... \n", n, rec_func(n));
	return 0;
}

int rec_func(int n)  //  rec_func 함수 정의
{

	if (n == 1)  //  n이 1이라면 1을 줄12의 rec_func(n)값을 1로 반환한다.
	{
		return 1;
	}

	else if (n <= 100)  //  n이 100 이하일 경우엔 rec_func를 정의하는 곳으로 반환해서 계산한다. for문처럼 n이 1이 될 때 까지 반복한다.
	{
		return(n + rec_func(n - 1));
	}
}