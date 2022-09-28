#include<stdio.h>


#define MAX 100
#define MIN 90
int main(void)
{
	int chest = 95;
	char size;

	if (chest <= MIN)
	{
		size = 'S';  // do not use "S"
	}
	else if (MIN < chest <= MAX)
	{
		size = 'M';  // do not use "M"
	}
	else if (MAX < chest)
	{
		size = 'L';  // do not use "L"
	}
	printf("your shirts size is %c \n", size); // choose your own shirts size

		return 0;


}