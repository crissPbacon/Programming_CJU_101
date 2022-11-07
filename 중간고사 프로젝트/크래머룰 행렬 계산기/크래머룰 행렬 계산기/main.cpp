#include<stdio.h>
#include<stdlib.h>

void Crule_example(void);		//  ���� ���� Ǯ��
void Crule_calculator(void);		//  �Է°� ���


int main(void)  // ���� ���� ��ġ
{
	int input = 0;
	Crule_example();		//  ���� ���� Ǯ�� �Լ� ȣ��
	printf("\nstart calculate,input 1\nor not, input any key\n");
	scanf_s("%d", &input);

	if (input==1)
	{
		Crule_calculator();		//  1�Է� �� �Է°� ��� �Լ� ȣ��
	}
	else
	{
		system("pause");
	}
	return 0;
}


void Crule_example(void)  // Crule_example �Լ� ����
{
	int ary[3][4] = { {3,2,1,7}, {1,-1,3,3}, {5,4,-2,1} };				//  �־��� ��
	int detA0[18] = { 3,2,1,3,2,1,1,-1,3,1,-1,3,5,4,-2,5,4,-2 };		//  for������ ����ϱ� ���� 3x3 �迭 2����
	int detA1[18] = { 7,2,1,7,2,1,3,-1,3,3,-1,3,1,4,-2,1,4,-2 };		//  �� �ٷ� 1x18 �迭�� �������
	int detA2[18] = { 3,7,1,3,7,1,1,3,3,1,3,3,5,1,-2,5,1,-2 };
	int detA3[18] = { 3,2,7,3,2,7,1,-1,3,1,-1,3,5,4,1,5,4,1 };
	int STEP_1 = 0;
	int STEP_2 = 0;
	int STEP_3 = 0;
	int STEP_4 = 0;
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

	for (i = 0; i < 3; i++)
	{
		STEP_1 += (detA0[i] * detA0[i + 7] * detA0[i + 14]);		//  ������ Ǯ ���� �»���� ���� 
		STEP_2 += (detA1[i] * detA1[i + 7] * detA1[i + 14]);
		STEP_3 += (detA2[i] * detA2[i + 7] * detA2[i + 14]);
		STEP_4 += (detA3[i] * detA3[i + 7] * detA3[i + 14]);
	}
	for (i = 12; i < 15; i++)
	{
		STEP_1 -= (detA0[i] * detA0[i - 5] * detA0[i - 10]);		//  ������ Ǯ ���� ���Ͽ�� ����
		STEP_2 -= (detA1[i] * detA1[i - 5] * detA1[i - 10]);
		STEP_3 -= (detA2[i] * detA2[i - 5] * detA2[i - 10]);
		STEP_4 -= (detA3[i] * detA3[i - 5] * detA3[i - 10]);
	}

	printf("\tdetA0 = %d\n\tdetA1 = %d\n\tdetA2 = %d\n\tdetA3 = %d\n\n", STEP_1, STEP_2, STEP_3, STEP_4);
	printf("\tx = %d\n\ty = %d\n\tz = %d\n\n", (STEP_2 / STEP_1), (STEP_3 / STEP_1), (STEP_4 / STEP_1));		//  �� ���
}


void Crule_calculator(void)  // Crule_calculator �Լ� ����
{
	int a = 0;		//  �迭 ��� �̸�
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;
	int i = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int input = 0;
	int x, y;		//  for������ ����� ����

	printf("(a)x + (b)y + (c)z = A\n(d)x + (e)y + (f)z = B\n(g)x + (h)y + (i)z = C\n\n");		//  ���̵� �޽���
	printf("input a, b ,c and A... : ");		//  �迭 ��� �Է�
	scanf_s("%d %d %d %d", &a, &b, &c, &A);
	printf("\ninput d, e ,f and B... : ");
	scanf_s("%d %d %d %d", &d, &e, &f, &B);
	printf("\ninput g, h ,i and C... : ");
	scanf_s("%d %d %d %d", &g, &h, &i, &C);
	printf("\n\n");

	int cal[3][4] = { {a,b,c,A},{d,e,f,B},{g,h,i,C} };			//  �迭 �ڸ��� �����صΰ� ��Ҵ� ������ �Է¹���
	int detA0[18] = { a,b,c,a,b,c,d,e,f,d,e,f,g,h,i,g,h,i };	//  for������ ����ϱ� ���� 3x3 �迭��
	int detA1[18] = { A,b,c,A,b,c,B,e,f,B,e,f,C,h,i,C,h,i };	// �� �ٷ� ���� 1x18 �迭�� ���� ������
	int detA2[18] = { a,A,c,a,A,c,d,B,f,d,B,f,g,C,i,g,C,i };
	int detA3[18] = { a,b,A,a,b,A,d,e,B,d,e,B,g,h,C,g,h,C };
	int STEP_1 = 0;
	int STEP_2 = 0;
	int STEP_3 = 0;
	int STEP_4 = 0;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 4; y++)
		{
			printf("%3d", cal[x][y]);		//  3x4 �迭�� ����
		}
		printf("\n");
	}
	printf("\n\n");

	for (x = 0; x < 3; x++)
	{
		STEP_1 += (detA0[x] * detA0[x + 7] * detA0[x + 14]);		//  ������ Ǯ ���� �»���� ���� 
		STEP_2 += (detA1[x] * detA1[x + 7] * detA1[x + 14]);
		STEP_3 += (detA2[x] * detA2[x + 7] * detA2[x + 14]);
		STEP_4 += (detA3[x] * detA3[x + 7] * detA3[x + 14]);
	}
	for (x = 12; x < 15; x++)
	{
		STEP_1 -= (detA0[x] * detA0[x - 5] * detA0[x - 10]);		//  ������ Ǯ ���� ���Ͽ�� ����
		STEP_2 -= (detA1[x] * detA1[x - 5] * detA1[x - 10]);
		STEP_3 -= (detA2[x] * detA2[x - 5] * detA2[x - 10]);
		STEP_4 -= (detA3[x] * detA3[x - 5] * detA3[x - 10]);
	}

	if (STEP_1 == 0)
	{
		printf("\tERROR! input again\n\n");		//  ����ó��. ���� �ĸ� �־��� ��� , �߸��� ���� �־��� ��쿣 ���� �޽��� ��� �� �ٽ� ���
		Crule_calculator();
	}
	else
	{
		printf("\tx = %d\n", (STEP_2 / STEP_1));
		printf("\ty = %d\n", (STEP_3 / STEP_1));
		printf("\tz = %d\n", (STEP_4 / STEP_1));		//  �� ���
	}

	

	printf("\nif problem is worng... or, input worng numbers -> x, y and z are all 0......\n ");		//  �Ұ����� ���� �־��� ���, xyz�� ��� 0�� ��µ��� ���
	printf("\nplease check the answers x,y and z, on your problems... \nif that cannot possible, your problem is worng... check it again......\n");		//  ù ��° �Ŀ��� ���� �� ������, �ٸ� �Ŀ��� ������ �ȵȴٸ� �װ� �߸� �� �������� ���
	printf("\ntry again\t:\tinput 1\nend program\t:\tinput any numbers\n");

	scanf_s("%d", &input);

	if (input == 1)
	{
		Crule_calculator();		//		1 �Է� �� �� ���
	}
	else
	{
		system("pause");
	}
}