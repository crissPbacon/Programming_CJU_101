#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct marriage
{
	char name[20];
	int age;
	char sex;
	double height;
};
struct marriage m1 = { "andy" , 22 , 'm', 187.5 };		//		���� ����
struct marriage* mp = &m1;

int main(void)
{
	printf("name : %s\n", mp->name);		//  -> ������ ���
	printf("age : %d\n", mp->age);
	printf("sex : %c\n", mp->sex);
	printf("height : %.1lf\n", mp->height);

	return 0;
}