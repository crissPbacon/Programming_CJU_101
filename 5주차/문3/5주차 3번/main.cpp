#include<stdio.h>

void Calculator(void);  //  Calculator 라는 함수 선언



int main(void)  // 메인 동작을 할 위치
{
	Calculator();  // 함수 호출
	return 0;
}


	void Calculator(void)  // Calculator 함수의 정의
	{
		int A = 0;
		int B = 0;
		char symbol;

		printf("Calculator \n + is plus \n - is minus \n * is multiply \n / is divide\n\n <A symbol B> shape \n\n\n\n");  //  사용설명서 안내
		scanf_s("%d %c %d", &A, &symbol, 1, &B);

		switch (symbol)  //  if문으로 지저분하게 쓰는 것 보다 switch로 줄이기
		{

		case '+':
		{
			int res = A + B;
			printf("덧셈 \n");
			printf("%d %c %d = %d\n", A, symbol, B, res);
			break;
		}


		case '-':
		{
			int res = A - B;
			printf("뺄셈 \n");
			
			if (A < B)
			{
				printf("do not choose the number that A < B... try again... \n\n\n");  // 음수값이 나오는 계산 시도시 경고 메시지 출력 후 다시 Calculator 함수 호출
				Calculator();
			}
			else if (A > B)
			{
				printf("%d %c %d = %d\n", A, symbol, B, res);
			}
			break;
		}


		case '*':
		{
			int res = A * B;
			printf("곱셈 \n");
			printf("%d %c %d = %d \n", A, symbol, B, res);
			break;
		}


		case '/':
		{
			int res = A / B;
			printf("나눗셈 \n");
			
			if (A < B)
			{
				printf("do not choose the number that A < B... try again... \n\n\n");  // 음수값이 나오는 계산 시도시 경고 메시지 출력 후 다시 Calculator 함수 호출
				Calculator();
			}
			else if (A > B)
			{
				printf("%d %c %d = %d \n", A, symbol, B, res);
			}
			break;
		}  // 이건 바로 위의 case문의 괄호임

		} //  switch문의 괄호 닫기

	}  // 함수의 정의 괄호 닫기

