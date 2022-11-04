#include<stdio.h>
#include<stdlib.h>

void Crule_example(void);		//  ���� ���� Ǯ��
void Crule_calculator(void);		//  �Է°� ���


int main(void)  // ���� ���� ��ġ
{
	int input = 0;
	Crule_example();		//  ���� ���� Ǯ�� �Լ� ȣ��
	printf("\nstart calculate,input 1\nor not, input any number\n");
	scanf_s("%d", &input);

	if (input==1)
	{
		Crule_calculator();		//  1�Է� �� �Է°� ��� �Լ� ȣ��
	}
	else
	{
		return 0;		//  �ٸ� ���� �Է� �� ����
	}			// ���ι� ����
	return 0;
}


void Crule_example(void)  // Crule_example �Լ� ����
{
	int ary[3][4] = { {3,2,1,7}, {1,-1,3,3}, {5,4,-2,1} };		//  �־��� ��
	int i, j;

	printf("find out x,y and z\n\n3x + 2y + 1z = 7\n1x - 1y + 3z = 3\n5x + 4y - 2z = 1\n\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%3d", ary[i][j]);		//  3x4 �迭�� ����
		}
		printf("\n");
	}

	printf("\n");

	int STEP_1 = 0;		
	int STEP_2 = 0;
	int STEP_3 = 0;
	int STEP_4 = 0;
	
	STEP_1 = (ary[0][0] * ary[1][1] * ary[2][2]) + (ary[0][1] * ary[1][2] * ary[2][0]) + (ary[0][2] * ary[1][0] * ary[2][1]) - (ary[2][0] * ary[1][1] * ary[0][2]) - (ary[2][1] * ary[1][2] * ary[0][0]) - (ary[2][2] * ary[1][0] * ary[0][1]);
	STEP_2 = (ary[0][3] * ary[1][1] * ary[2][2]) + (ary[0][1] * ary[1][2] * ary[2][3]) + (ary[0][2] * ary[1][3] * ary[2][1]) - (ary[2][3] * ary[1][1] * ary[0][2]) - (ary[2][1] * ary[1][2] * ary[0][3]) - (ary[2][2] * ary[1][3] * ary[0][1]);
	STEP_3 = (ary[0][0] * ary[1][3] * ary[2][2]) + (ary[0][3] * ary[1][2] * ary[2][0]) + (ary[0][2] * ary[1][0] * ary[2][3]) - (ary[2][0] * ary[1][3] * ary[0][2]) - (ary[2][3] * ary[1][2] * ary[0][0]) - (ary[2][2] * ary[1][0] * ary[0][3]);
	STEP_4 = (ary[0][0] * ary[1][1] * ary[2][3]) + (ary[0][1] * ary[1][3] * ary[2][0]) + (ary[0][3] * ary[1][0] * ary[2][1]) - (ary[2][0] * ary[1][1] * ary[0][3]) - (ary[2][1] * ary[1][3] * ary[0][0]) - (ary[2][3] * ary[1][0] * ary[0][1]);
			//  ũ���ӷ� ����
	printf("\tdetA0 = %d\n\tdetA1 = %d\n\tdetA2 = %d\n\tdetA3 = %d\n\n", STEP_1, STEP_2, STEP_3, STEP_4);
	printf("\tx = %d\n\ty = %d\n\tz = %d\n\n", STEP_2 / STEP_1, STEP_3 / STEP_1, STEP_4 / STEP_1);		//  �� ���
}


void Crule_calculator(void)  // Crule_calculator �Լ� ����
{
	int x, y = 0;
	int cal[3][4] = {};  //  �迭 �ڸ��� �����صΰ� ��Ҵ� ���� ����
	int input;
	

	printf("(a)x + (b)y + (c)z = A\n(d)x + (e)y + (f)z = B\n(g)x + (h)y + (i)z = C\n\n");
	printf("input a, b ,c, A, d, e, f, B, g, h, i, C......\n");
	
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 4; y++)
		{
			scanf_s("%d", &cal[x][y]);		//  �迭 ��� �Է�
		}
	}
	printf("\n");


	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 4; y++)
		{
			printf("%3d", cal[x][y]);		//  3x4 �迭�� ����
		}
		printf("\n");
	}
	printf("\n\n");

	int STEP_1 = 0;
	int STEP_2 = 0;
	int STEP_3 = 0;
	int STEP_4 = 0;

	STEP_1 = (cal[0][0] * cal[1][1] * cal[2][2]) + (cal[0][1] * cal[1][2] * cal[2][0]) + (cal[0][2] * cal[1][0] * cal[2][1]) - (cal[2][0] * cal[1][1] * cal[0][2]) - (cal[2][1] * cal[1][2] * cal[0][0]) - (cal[2][2] * cal[1][0] * cal[0][1]);
	STEP_2 = (cal[0][3] * cal[1][1] * cal[2][2]) + (cal[0][1] * cal[1][2] * cal[2][3]) + (cal[0][2] * cal[1][3] * cal[2][1]) - (cal[2][3] * cal[1][1] * cal[0][2]) - (cal[2][1] * cal[1][2] * cal[0][3]) - (cal[2][2] * cal[1][3] * cal[0][1]);
	STEP_3 = (cal[0][0] * cal[1][3] * cal[2][2]) + (cal[0][3] * cal[1][2] * cal[2][0]) + (cal[0][2] * cal[1][0] * cal[2][3]) - (cal[2][0] * cal[1][3] * cal[0][2]) - (cal[2][3] * cal[1][2] * cal[0][0]) - (cal[2][2] * cal[1][0] * cal[0][3]);
	STEP_4 = (cal[0][0] * cal[1][1] * cal[2][3]) + (cal[0][1] * cal[1][3] * cal[2][0]) + (cal[0][3] * cal[1][0] * cal[2][1]) - (cal[2][0] * cal[1][1] * cal[0][3]) - (cal[2][1] * cal[1][3] * cal[0][0]) - (cal[2][3] * cal[1][0] * cal[0][1]);
	

	if (STEP_1 == 0)
	{
		printf("\tERROR! input again\n\n");		//  ����ó��. ���� �ĸ� �־��� ��� , �߸��� ���� �־��� ��쿣 ���� �޽��� ��� �� �ٽ� ���
		Crule_calculator();
	}
	if (STEP_2 == 0)
	{
		printf("\tERROR! input again\n\n");
		Crule_calculator();
	}
	if (STEP_3 == 0)
	{
		printf("\tERROR! input again\n\n");
		Crule_calculator();
	}
	if (STEP_4 == 0)
	{
		printf("\tERROR! input again\n\n");
		Crule_calculator();
	}

	printf("\tx = %d\n", (STEP_2 / STEP_1));
	printf("\ty = %d\n", (STEP_3 / STEP_1));
	printf("\tz = %d\n", (STEP_4 / STEP_1));		//  �� ���

	printf("\nif problem is worng... or, input worng numbers -> x, y and z are all 0......\n ");		//  �Ұ����� ���� �־��� ���, xyz�� ��� 0�� ��µ��� ���
	printf("\ntry again\t:\tinput 1\nend program\t:\tinput any numbers\n");
	scanf_s("%d", &input);

	if (input == 1)
	{
		Crule_calculator();		//		1 �Է� �� �� ���
	}
	else
	{
		system("pause");		  //  �ٸ� ���� �Է� �� ����
	}
}