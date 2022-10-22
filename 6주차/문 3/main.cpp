#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define seedNum 179  //  의미 없는 숫자. 본인 신장으로 설정
#define n 2  // line
#define m 3  // row



void Seed() //  시간에 의한 seed 넘버 생성 함수 선언  //  seed값에 따라 rad num 출력값이 달라짐
{	
	srand((unsigned int)(time(NULL)));  // 매번 seed를 다르게 입력해야하는데, time을 사용하면 매 순간 입력값이 달라짐
	return;
}


unsigned int GenRandNum(unsigned int(seed))  //  랜덤숫자 생성 함수 선언
{
	unsigned int nRes = 0;  // unsigned = 양수값만 취급하겠다.
	unsigned int nNum = rand();
	nRes = (((unsigned int)(nNum) % (seed))+1); // 0 나오는 경우 없애기. 상관은 없으나, 결과값에 0이 나오면 중간에 어느 과정에서 문제가 생겼는지 확인하기 불편함
	return nRes;
}

int main(void)
{
	Seed();
	int seed = seedNum;		//		seedNum을 바로 넣고싶은데 오류가 나서 이렇게 해주니 정상작동함.
	int i, j,k;
	int nxm_mat[n][m];
	int mxn_mat[m][n];
	
	printf("nxm matrix \n");
	for (i = 0; i < n; i++)		// 출력값으로 nxm행렬 생성
	{
		for (j = 0; j < m; j++)
		{
			nxm_mat[i][j] = (int)GenRandNum(seed);   //  인터넷 보고 따라하긴 했는데 괄호를 언제, 어떻게 써야하는지 아직 잘 모르겟다.
			printf("%5d", nxm_mat[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	printf("nxm matrix \n");
	for (i = 0; i < m; i++)		// 출력값으로 mxn행렬 생성
	{
		for (j = 0; j < n; j++)
		{
			mxn_mat[i][j] = (int)GenRandNum(seed);  
			printf("%5d", mxn_mat[i][j]);   
		}
		printf("\n");
	}
	printf("\n\n");

				//  여기까지 행렬 만들기 완료
				//  이제 행렬 계산

				// 1 2 3          1 2       1*1 + 2*3 + 3*5       1*2 + 2*4 + 3*6
	            // 4 5 6      x   3 4   =   4*1 + 5*3 + 6*5       4*2 + 5*4 + 6*6
		        //                5 6


	int res[n][m] = { 0, };


	printf("nxm matrix * mxn matrix\n\n");

	for (i = 0; i < n; i++)			// res[i][k]는 2x2 행렬이다. res[0][0]의 값에 nxm[0][0] * mxn[0][0]의 값을 더해서 저장한다.. 이어서 nxm[0][1] * mxn[1][0] ......
	{								// 이 방법을 쓰면 손으로 풀 듯 노가다 하지 않아도 된다.
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < m; k++)
			{
				res[i][j] += nxm_mat[i][k] * mxn_mat[k][j];
			}
		}
	}

	for (i = 0; i < n; i++)			//res[i][j] 행렬을 출력함.
	{
		for (j = 0; j < n; j++)
		{
			printf("%10d", res[i][j]);
		}
		printf("\n");
	}
				//  nxm * mxn 행렬을 nxn 행렬로 만들었음

	
	return 0;
}
