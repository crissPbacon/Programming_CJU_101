#include<stdio.h>
#define password 0+0+1+1+1+8	// correct password is my birthday, 001118......

int password_func(void);	

int password_func(void)			// password_func works like this......
{
	int ary[6];
	int i;
	int res = 0;

	printf("input password......\n");

	for (i = 0; i < 6; i++)		// input numbers......
	{
		scanf_s("%d", &ary[i]);
	}

	for (i = 0; i < 6; i++)		// plus all input numbers and remember......
	{
		res += ary[i];
	}

	for (i = 0; i < 6; i++)		// print input numbers......
	{
		printf("%4d", ary[i]);
	}

	printf("\n");

	if (res == password)
	{
		printf("normal termination......\n");
	}
	else if (res < password)
	{
		printf("not matched, retry......\n\n\n");
		return password_func();		//  input numbers again......
	}
	else if (res > password)
	{
		printf("not matched, retry......\n\n\n");		//  input numbers again......
		return password_func();
	}
}


int main(void)		// this is main......
{
	password_func();		// call password_func

	return 0;
}
