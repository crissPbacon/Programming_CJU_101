#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define seedNum 179




int main(void)
{

	int i, j, k;
	
	int RanNum[9];

	srand(time(NULL));		//		랜덤 넘버 생성 코드를 문제 3번을 해결하면서 공부한 것을 바탕으로, 문제 4번에 맞게 다시 만들었음.

	for (i = 0; i < 9; i++)
	{
		RanNum[i] = (rand() % (seedNum)+1);
	}

	printf("initial data : ");		//		초기 난수 배열 

	for (i = 0; i < 9; i++)
	{
		printf("%5d", RanNum[i]);
	}
	printf("\n\n");

	printf("descending order : ");		//		내림차순 배열

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


	printf("ascending order : ");		//		오름차순 배열

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