#include<stdio.h>

int main(void)
{
	int i, j;
	int A;
	int prime_num;
	int res=0;  //  �ʱⰪ�� 0���� �صξ�� ���� �ȳ�

	printf("input any integer number...  but, over 2... \n");
	scanf_s("%d", &A);

	for (i = 2; i < A; i++)  // �Է��� A�� -1 �ܰ���� �����Ѵ�. ex) A�� 10�̶�� 9�ܰ���� ����
	{
		prime_num = 1;
		for (j = 2; j < i; j++)  //  17�� ~ 23�ٿ� �ش���.
		{
			if ((i % j) == 0)
			{
				prime_num = 0;  //  �� �ܰ��� ���ڷ� A���� ������ ��, ���� 0�̸� ������ �ƴϴ�. 
				break;  //  ������ �ƴ϶�� �����ϰ� if���� �����. ���� 0�� �ƴ϶�� for���� �ݺ��Ѵ�.
			}
		}

		if (prime_num == 1)  // ������ ��쿣
		{
			printf("%d\t", i);  // %5d�� �� �ڸ��� 5����Ʈ�� ������ �ο��ϰڴٴ� �ǹ�
			res++;  //  ���� �ϳ� ã�����ϱ� ����� ���� +1
			if ((res % 5) == 0)  // ����� ������ 5����� 
			{
				printf("\n");  // ���� �ٲ۴�.
			}
		}
	}
	
	return 0;
}