#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define seedNum 179  //  �ǹ� ���� ����. ���� �������� ����
#define n 2  // line
#define m 3  // row



void Seed() //  �ð��� ���� seed �ѹ� ���� �Լ� ����  //  seed���� ���� rad num ��°��� �޶���
{	
	srand((unsigned int)(time(NULL)));  // �Ź� seed�� �ٸ��� �Է��ؾ��ϴµ�, time�� ����ϸ� �� ���� �Է°��� �޶���
	return;
}


unsigned int GenRandNum(unsigned int(seed))  //  �������� ���� �Լ� ����
{
	unsigned int nRes = 0;  // unsigned = ������� ����ϰڴ�.
	unsigned int nNum = rand();
	nRes = (((unsigned int)(nNum) % (seed))+1); // 0 ������ ��� ���ֱ�. ����� ������, ������� 0�� ������ �߰��� ��� �������� ������ ������� Ȯ���ϱ� ������
	return nRes;
}

int main(void)
{
	Seed();
	int seed = seedNum;		//		seedNum�� �ٷ� �ְ������ ������ ���� �̷��� ���ִ� �����۵���.
	int i, j,k;
	int nxm_mat[n][m];
	int mxn_mat[m][n];
	
	printf("nxm matrix \n");
	for (i = 0; i < n; i++)		// ��°����� nxm��� ����
	{
		for (j = 0; j < m; j++)
		{
			nxm_mat[i][j] = (int)GenRandNum(seed);   //  ���ͳ� ���� �����ϱ� �ߴµ� ��ȣ�� ����, ��� ����ϴ��� ���� �� �𸣰ٴ�.
			printf("%5d", nxm_mat[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	printf("nxm matrix \n");
	for (i = 0; i < m; i++)		// ��°����� mxn��� ����
	{
		for (j = 0; j < n; j++)
		{
			mxn_mat[i][j] = (int)GenRandNum(seed);  
			printf("%5d", mxn_mat[i][j]);   
		}
		printf("\n");
	}
	printf("\n\n");

				//  ������� ��� ����� �Ϸ�
				//  ���� ��� ���

				// 1 2 3          1 2       1*1 + 2*3 + 3*5       1*2 + 2*4 + 3*6
	            // 4 5 6      x   3 4   =   4*1 + 5*3 + 6*5       4*2 + 5*4 + 6*6
		        //                5 6


	int res[n][m] = { 0, };


	printf("nxm matrix * mxn matrix\n\n");

	for (i = 0; i < n; i++)			// res[i][k]�� 2x2 ����̴�. res[0][0]�� ���� nxm[0][0] * mxn[0][0]�� ���� ���ؼ� �����Ѵ�.. �̾ nxm[0][1] * mxn[1][0] ......
	{								// �� ����� ���� ������ Ǯ �� �밡�� ���� �ʾƵ� �ȴ�.
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < m; k++)
			{
				res[i][j] += nxm_mat[i][k] * mxn_mat[k][j];
			}
		}
	}

	for (i = 0; i < n; i++)			//res[i][j] ����� �����.
	{
		for (j = 0; j < n; j++)
		{
			printf("%10d", res[i][j]);
		}
		printf("\n");
	}
				//  nxm * mxn ����� nxn ��ķ� �������

	
	return 0;
}
