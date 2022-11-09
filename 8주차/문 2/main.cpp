#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char input[80];
	char output[80];
	char star[80] = "******************************";
	int len = strlen(input);
	
	printf("단어 입력 : ");
	scanf_s("%s", input, (int)sizeof(input));

	strncpy(output, input, 5);
	output[5] = '\0';
	for (int i = 0; i < len; i++)
	{
		strcat(output, "*");
	}
	printf("%s", output);

	system("pause");
	return 0;

}