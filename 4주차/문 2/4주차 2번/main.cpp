#include<stdio.h>

int main(void)
{
	int age = 25, chest = 95;  
	char size;

	if (age < 20)  //  if age is under 20
	{
		if (chest < 85)
		{
			size = 'S';
		}
		if (85 <= chest < 95)
		{
			size = 'M';
		}
		if (95 <= chest)
		{
			size = 'L';
		}
	}

	else if (20 <= age)  // if age is same as 20 or over 20
	{
		if (chest < 90)
		{
			size = 'S';
		}
		if (90 <= chest < 100)
		{
			size = 'M';
		}
		if (100 <= chest)
		{
			size = 'L';
		}
	}

	printf("your size is %c \n", size);  // print your size
	
	return 0;

}