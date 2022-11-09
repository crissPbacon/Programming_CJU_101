#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char str[80];
	strcpy(str, "wine");		// str = wine
	strcat(str, "apple");		//  str = wineapple
	strncpy(str, "pear", 1);		//  str = wineapple -> pineapple
	printf("%s, %d\n", str, strlen(str));		// %s = pineapple, %d = 9
	return 0;
}