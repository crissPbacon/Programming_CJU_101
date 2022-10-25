#include<stdio.h>
#include<stdlib.h>

void func(void);
void func2(void);

void func(void)
{
	int ary[6] = { 0, 0, 1, 1, 1, 8 };  //  initial password
	int input[6];
	int i = 0;


	for (i = 0; i < 6; i++)
	{
		scanf_s("%d", &input[i]);
	}

	if (ary[0] == input[0])  // compare input with initial password
	{
		if (ary[1] == input[1])
		{
			if (ary[2] == input[2])
			{
				if (ary[3] == input[3])
				{
					if (ary[4] == input[4])
					{
						if (ary[5] == input[5])
						{
							printf("normal termination..\n\n");
							system("pause");
						}
					}
				}
			}
		}
	}
	else
	{
		printf("not matched, retry..\n\n");
		return func2();  //  to input again
	}
}

void func2(void)
{
	func();
}


int main(void)	  // 
{
	func();
	return 0;
}

