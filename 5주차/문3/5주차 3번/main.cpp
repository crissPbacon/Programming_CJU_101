#include<stdio.h>

void Calculator(void);  //  Calculator ��� �Լ� ����



int main(void)  // ���� ������ �� ��ġ
{
	Calculator();  // �Լ� ȣ��
	return 0;
}


	void Calculator(void)  // Calculator �Լ��� ����
	{
		int A = 0;
		int B = 0;
		char symbol;

		printf("Calculator \n + is plus \n - is minus \n * is multiply \n / is divide\n\n <A symbol B> shape \n\n\n\n");  //  ��뼳�� �ȳ�
		scanf_s("%d %c %d", &A, &symbol, 1, &B);

		switch (symbol)  //  if������ �������ϰ� ���� �� ���� switch�� ���̱�
		{

		case '+':
		{
			int res = A + B;
			printf("���� \n");
			printf("%d %c %d = %d\n", A, symbol, B, res);
			break;
		}


		case '-':
		{
			int res = A - B;
			printf("���� \n");
			
			if (A < B)
			{
				printf("do not choose the number that A < B... try again... \n\n\n");  // �������� ������ ��� �õ��� ��� �޽��� ��� �� �ٽ� Calculator �Լ� ȣ��
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
			printf("���� \n");
			printf("%d %c %d = %d \n", A, symbol, B, res);
			break;
		}


		case '/':
		{
			int res = A / B;
			printf("������ \n");
			
			if (A < B)
			{
				printf("do not choose the number that A < B... try again... \n\n\n");  // �������� ������ ��� �õ��� ��� �޽��� ��� �� �ٽ� Calculator �Լ� ȣ��
				Calculator();
			}
			else if (A > B)
			{
				printf("%d %c %d = %d \n", A, symbol, B, res);
			}
			break;
		}  // �̰� �ٷ� ���� case���� ��ȣ��

		} //  switch���� ��ȣ �ݱ�

	}  // �Լ��� ���� ��ȣ �ݱ�

