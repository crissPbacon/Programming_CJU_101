#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char input[80];			//  입력값 자리 지정
	char output[80];		//  중간 과정 자리 지정  
	char star[20] = "***************";		//  잘라다가 쓸 별 배열
	char ans[20];			//  최종 답 자리 지정
	int i;

	printf("단어 입력 : ");
	scanf_s("%s", &input, (int)sizeof input);		//  입력받고
	strncpy_s(output, input, 5);		//  중간 과정에 5번째 이후부터는 전부 잘라서 삽입
	output[5] = '\0';					//  5번째 이후 자리에 null문자 삽입
	
	

	strcat_s(output, star);				//  중간 과정에 별 배열 붙이기
	output[15] = '\0';					//  중간 과정 15번째 이후 자리에 null문자 삽입
	strncpy_s(ans, output, 15);			//  최종 답에 중간 과정을 15번째 이후부터는 전부 잘라서 삽입

	printf("%s", output);				//  출력
}