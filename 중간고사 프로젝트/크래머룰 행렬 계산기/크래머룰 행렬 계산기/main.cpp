#include<stdio.h>
#include<stdlib.h>

void Crule_example(void);		//  발췌 예제 풀이
void Crule_calculator(void);		//  입력값 계산


int main(void)  // 메인 동작 위치
{
	int input = 0;
	Crule_example();		//  발췌 예제 풀이 함수 호출
	printf("\nstart calculate,input 1\nor not, input any key\n");
	scanf_s("%d", &input);

	if (input==1)
	{
		Crule_calculator();		//  1입력 시 입력값 계산 함수 호출
	}
	else
	{
		system("pause");
	}
	return 0;
}


void Crule_example(void)  // Crule_example 함수 정의
{
	int ary[3][4] = { {3,2,1,7}, {1,-1,3,3}, {5,4,-2,1} };				//  주어진 값
	int detA0[18] = { 3,2,1,3,2,1,1,-1,3,1,-1,3,5,4,-2,5,4,-2 };		//  for문으로 계산하기 위해 3x3 배열 2개를
	int detA1[18] = { 7,2,1,7,2,1,3,-1,3,3,-1,3,1,4,-2,1,4,-2 };		//  한 줄로 1x18 배열을 만들었음
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
			printf("%3d", ary[i][j]);		//  3x4 배열로 생성
		}
		printf("\n");
	}

	printf("\n");

	for (i = 0; i < 3; i++)
	{
		STEP_1 += (detA0[i] * detA0[i + 7] * detA0[i + 14]);		//  손으로 풀 때의 좌상우하 덧셈 
		STEP_2 += (detA1[i] * detA1[i + 7] * detA1[i + 14]);
		STEP_3 += (detA2[i] * detA2[i + 7] * detA2[i + 14]);
		STEP_4 += (detA3[i] * detA3[i + 7] * detA3[i + 14]);
	}
	for (i = 12; i < 15; i++)
	{
		STEP_1 -= (detA0[i] * detA0[i - 5] * detA0[i - 10]);		//  손으로 풀 때의 좌하우상 뺄셈
		STEP_2 -= (detA1[i] * detA1[i - 5] * detA1[i - 10]);
		STEP_3 -= (detA2[i] * detA2[i - 5] * detA2[i - 10]);
		STEP_4 -= (detA3[i] * detA3[i - 5] * detA3[i - 10]);
	}

	printf("\tdetA0 = %d\n\tdetA1 = %d\n\tdetA2 = %d\n\tdetA3 = %d\n\n", STEP_1, STEP_2, STEP_3, STEP_4);
	printf("\tx = %d\n\ty = %d\n\tz = %d\n\n", (STEP_2 / STEP_1), (STEP_3 / STEP_1), (STEP_4 / STEP_1));		//  답 출력
}


void Crule_calculator(void)  // Crule_calculator 함수 정의
{
	int a = 0;		//  배열 요소 이름
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
	int x, y;		//  for문에서 사용할 변수

	printf("(a)x + (b)y + (c)z = A\n(d)x + (e)y + (f)z = B\n(g)x + (h)y + (i)z = C\n\n");		//  가이드 메시지
	printf("input a, b ,c and A... : ");		//  배열 요소 입력
	scanf_s("%d %d %d %d", &a, &b, &c, &A);
	printf("\ninput d, e ,f and B... : ");
	scanf_s("%d %d %d %d", &d, &e, &f, &B);
	printf("\ninput g, h ,i and C... : ");
	scanf_s("%d %d %d %d", &g, &h, &i, &C);
	printf("\n\n");

	int cal[3][4] = { {a,b,c,A},{d,e,f,B},{g,h,i,C} };			//  배열 자리만 지정해두고 요소는 별도로 입력받음
	int detA0[18] = { a,b,c,a,b,c,d,e,f,d,e,f,g,h,i,g,h,i };	//  for문으로 계산하기 위해 3x3 배열을
	int detA1[18] = { A,b,c,A,b,c,B,e,f,B,e,f,C,h,i,C,h,i };	// 한 줄로 만들어서 1x18 배열도 따로 저장함
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
			printf("%3d", cal[x][y]);		//  3x4 배열로 생성
		}
		printf("\n");
	}
	printf("\n\n");

	for (x = 0; x < 3; x++)
	{
		STEP_1 += (detA0[x] * detA0[x + 7] * detA0[x + 14]);		//  손으로 풀 때의 좌상우하 덧셈 
		STEP_2 += (detA1[x] * detA1[x + 7] * detA1[x + 14]);
		STEP_3 += (detA2[x] * detA2[x + 7] * detA2[x + 14]);
		STEP_4 += (detA3[x] * detA3[x + 7] * detA3[x + 14]);
	}
	for (x = 12; x < 15; x++)
	{
		STEP_1 -= (detA0[x] * detA0[x - 5] * detA0[x - 10]);		//  손으로 풀 때의 좌하우상 뺄셈
		STEP_2 -= (detA1[x] * detA1[x - 5] * detA1[x - 10]);
		STEP_3 -= (detA2[x] * detA2[x - 5] * detA2[x - 10]);
		STEP_4 -= (detA3[x] * detA3[x - 5] * detA3[x - 10]);
	}

	if (STEP_1 == 0)
	{
		printf("\tERROR! input again\n\n");		//  예외처리. 같은 식만 넣었을 경우 , 잘못된 식을 넣었을 경우엔 에러 메시지 출력 후 다시 계산
		Crule_calculator();
	}
	else
	{
		printf("\tx = %d\n", (STEP_2 / STEP_1));
		printf("\ty = %d\n", (STEP_3 / STEP_1));
		printf("\tz = %d\n", (STEP_4 / STEP_1));		//  답 출력
	}

	

	printf("\nif problem is worng... or, input worng numbers -> x, y and z are all 0......\n ");		//  불가능한 식을 넣었을 경우, xyz가 모두 0이 출력됨을 명시
	printf("\nplease check the answers x,y and z, on your problems... \nif that cannot possible, your problem is worng... check it again......\n");		//  첫 번째 식에는 맞을 수 있으나, 다른 식에는 적용이 안된다면 그건 잘못 된 문제임을 명시
	printf("\ntry again\t:\tinput 1\nend program\t:\tinput any numbers\n");

	scanf_s("%d", &input);

	if (input == 1)
	{
		Crule_calculator();		//		1 입력 시 또 계산
	}
	else
	{
		system("pause");
	}
}