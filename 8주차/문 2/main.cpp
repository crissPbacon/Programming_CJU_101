#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char input[80];			//  �Է°� �ڸ� ����
	char output[80];		//  �߰� ���� �ڸ� ����  
	char star[20] = "***************";		//  �߶�ٰ� �� �� �迭
	char ans[20];			//  ���� �� �ڸ� ����
	int i;

	printf("�ܾ� �Է� : ");
	scanf_s("%s", &input, (int)sizeof input);		//  �Է¹ް�
	strncpy_s(output, input, 5);		//  �߰� ������ 5��° ���ĺ��ʹ� ���� �߶� ����
	output[5] = '\0';					//  5��° ���� �ڸ��� null���� ����
	
	

	strcat_s(output, star);				//  �߰� ������ �� �迭 ���̱�
	output[15] = '\0';					//  �߰� ���� 15��° ���� �ڸ��� null���� ����
	strncpy_s(ans, output, 15);			//  ���� �信 �߰� ������ 15��° ���ĺ��ʹ� ���� �߶� ����

	printf("%s", output);				//  ���
}