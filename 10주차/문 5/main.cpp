#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct train Train;

struct train
{
	int seats;
	struct train * next;
};
int main(void)
{
	Train* head = NULL, * tail = NULL;		//  가리키는 방향 설정
	int i;
	for (i = 0; i < 5; i++)		//		5회 반복	
	{
		if (head == NULL)
		{
			head = tail = (Train*)malloc(sizeof(Train));
		}
		else
		{
			tail->next = (Train*)malloc(sizeof(Train));
			tail = tail->next;
		}
	}
	return 0;
}