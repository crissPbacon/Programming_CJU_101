#include<stdio.h>

int rec_func(int n);  //  rec_func ��� �Լ� ����


int main(void)  // ���� ������ �� ��ġ
{
	int n;
	printf("input natural number under 100...\n\n\n");
	scanf_s("%d", &n);

	printf("%d! =  %d... \n", n, rec_func(n));
	return 0;
}

int rec_func(int n)  //  rec_func �Լ� ����
{

	if (n == 1)  //  n�� 1�̶�� 1�� ��12�� rec_func(n)���� 1�� ��ȯ�Ѵ�.
	{
		return 1;
	}

	else if (n <= 100)  //  n�� 100 ������ ��쿣 rec_func�� �����ϴ� ������ ��ȯ�ؼ� ����Ѵ�. for��ó�� n�� 1�� �� �� ���� �ݺ��Ѵ�.
	{
		return(n + rec_func(n - 1));
	}
}