#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define seedNum 179




int main(void)
{

	int i, j, k;
	
	int RanNum[9];

	srand(time(NULL));		//		���� �ѹ� ���� �ڵ带 ���� 3���� �ذ��ϸ鼭 ������ ���� ��������, ���� 4���� �°� �ٽ� �������.

	for (i = 0; i < 9; i++)
	{
		RanNum[i] = (rand() % (seedNum)+1);
	}

	printf("initial data : ");		//		�ʱ� ���� �迭 

	for (i = 0; i < 9; i++)
	{
		printf("%5d", RanNum[i]);
	}
	printf("\n\n");

	printf("descending order : ");		//		�������� �迭

	for (i = 0; i < 9; i++)
	{
		for (j = (i + 1); j < 9; j++)
		{
			if (RanNum[i] < RanNum[j])
			{
				k = RanNum[i];
				RanNum[i] = RanNum[j];
				RanNum[j] = k;
			}
		}
		printf("%5d", RanNum[i]);
	}
	printf("\n\n");


	printf("ascending order : ");		//		�������� �迭

	for (i = 0; i < 9; i++)
	{
		for (j = (i+1); j < 9; j++)
		{
			if (RanNum[i] > RanNum[j])
			{
				k = RanNum[i];
				RanNum[i] = RanNum[j];
				RanNum[j] = k;
			}
		}
		printf("%5d", RanNum[i]);
	}

	printf("\n\n");
	return 0;
}