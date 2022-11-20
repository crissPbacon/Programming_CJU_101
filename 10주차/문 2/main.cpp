#include<stdio.h>
#include<stdlib.h>


int infoio_func(void);		//  구조체 입출력 함수
	

struct book		// 구조체 지정
{
	char title[50];
	char author[50];
	char page[50];
	char price[50];
};

int infoio_func(void)
{
	struct book info1;
	printf("1st book's title : ");
	scanf_s("%s", info1.title, 50);
	printf("1st book's author : ");
	scanf_s("%s", info1.author, 50);
	printf("1st book's page : ");
	scanf_s("%s", info1.page, 50);
	printf("1st book's price : ");
	scanf_s("%s", info1.price, 50);

	struct book info2;
	printf("\n\n2nd book's title : ");
	scanf_s("%s", info2.title, 50);
	printf("2nd book's author : ");
	scanf_s("%s", info2.author, 50);
	printf("2nd book's page : ");
	scanf_s("%s", info2.page, 50);
	printf("2nd book's price : ");
	scanf_s("%s", info2.price, 50);

	struct book info3;
	printf("\n\n3rd book's title : ");
	scanf_s("%s", info3.title, 50);
	printf("3rd book's author : ");
	scanf_s("%s", info3.author, 50);
	printf("3rd book's page : ");
	scanf_s("%s", info3.page, 50);
	printf("3rd book's price : ");
	scanf_s("%s", info3.price, 50);


	printf("\n\ntitle1\t:\t%s\n", info1.title);
	printf("\nauthor1\t:\t%s\n", info1.author);
	printf("\npage1\t:\t%s\n", info1.page);
	printf("\nprice1\t:\t%s\n", info1.price);

	printf("\n\ntitle2\t:\t%s\n", info2.title);
	printf("\nauthor2\t:\t%s\n", info2.author);
	printf("\npage2\t:\t%s\n", info2.page);
	printf("\nprice2\t:\t%s\n", info2.price);

	printf("\n\ntitle3\t:\t%s\n", info3.title);
	printf("\nauthor3\t:\t%s\n", info3.author);
	printf("\npage3\t:\t%s\n", info3.page);
	printf("\nprice3\t:\t%s\n", info3.price);

	system("pause");
	return 0;
}

int main(void)
{
	infoio_func();
}