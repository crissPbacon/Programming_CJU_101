#include<stdio.h>

int main(void)
{
	int i, j;
	int A;
	int prime_num;
	int res=0;  //  초기값을 0으로 해두어야 오류 안남

	printf("input any integer number...  but, over 2... \n");
	scanf_s("%d", &A);

	for (i = 2; i < A; i++)  // 입력한 A의 -1 단계까지 진행한다. ex) A가 10이라면 9단계까지 진행
	{
		prime_num = 1;
		for (j = 2; j < i; j++)  //  17줄 ~ 23줄에 해당함.
		{
			if ((i % j) == 0)
			{
				prime_num = 0;  //  각 단계의 숫자로 A값을 나눴을 때, 몫이 0이면 정수가 아니다. 
				break;  //  정수가 아니라면 중지하고 if문을 벗어난다. 몫이 0이 아니라면 for문을 반복한다.
			}
		}

		if (prime_num == 1)  // 정수일 경우엔
		{
			printf("%d\t", i);  // %5d는 한 자리에 5바이트의 공간을 부여하겠다는 의미
			res++;  //  정수 하나 찾았으니까 결과값 갯수 +1
			if ((res % 5) == 0)  // 결과값 갯수가 5개라면 
			{
				printf("\n");  // 줄을 바꾼다.
			}
		}
	}
	
	return 0;
}