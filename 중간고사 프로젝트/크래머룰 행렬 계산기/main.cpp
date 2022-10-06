#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a = 3;    //    ax + by + cz = B1
	int b = 2;    //    dx + ey + fz = B2
	int c = 1;    //    gx + hy + iz = B3
	int d = 1;
	int e = -1;
	int f = 3;
	int g = 5;
	int h = 4;
	int i = -2;
	int B1 = 7;
	int B2 = 3;
	int B3 = 1;

	int STEP_1 = 0;
	int STEP_2 = 0;
	int STEP_3 = 0;
	int STEP_4 = 0;

	STEP_1 = (a * e * i) + (b * f * g) + (c * d * h) - (g * e * c) - (h * f * a) - (i * d * b);
	STEP_2 = (B1 * e * i) + (b * f * B3) + (c * B2 * h) - (B3 * e * c) - (h * f * B1) - (i * B2 * b);
	STEP_3 = (a * B2 * i) + (B1 * f * g) + (c * d * B3) - (g * B2 * c) - (B3 * f * a) - (i * d * B1);
	STEP_4 = (a * e * B3) + (b * B2 * g) + (B1 * d * h) - (g * e * B1) - (h * B2 * a) - (B3 * d * b);
	//  super important step in Cramer's rule. line 24 ~ 27.
	

	printf(" matrix calculator by YS......\n let's solve this example......\n\n");  //  just show the example
	printf(" %3dx  +%3dy  +%3dz  =%3d \n", 3, 2, 1, 7);
	printf(" %3dx  -%3dy  +%3dz  =%3d \n", 1, 1, 3, 3);
	printf(" %3dx  +%3dy  -%3dz  =%3d \n\n", 5, 4, 2, 1);


	printf(" STEP_1 \n\t<det A> \n\t    l3  2  1l \n    det A = l1 -1  3l\t= %d \n\t    l5  4 -2l \n\n", STEP_1);
	printf(" STEP_2 \n\t<det A1> \n\t     l7  2  1l \n    det A1 = l3 -1  3l\t= %d \n\t     l1  4 -2l \n\n", STEP_2);
	printf(" STEP_3 \n\t<det A2> \n\t     l3  7  1l \n    det A2 = l1  3  3l\t= %d \n\t     l5  4 -2l \n\n", STEP_3);
	printf(" STEP_4 \n\t<det A3> \n\t     l3  2  7l \n    det A3 = l1 -1  3l\t= %d \n\t     l3  4  1l \n\n\n", STEP_4);
	//  line 37 ~ 40 -> calculate & print det A, det A1 ~ det A3

	printf(" and now, we can find out x, y and z \n\n");
	printf(" x = (det A1 / det A) = %d\n", (STEP_2 / STEP_1));
	printf(" y = (det A2 / det A) = %d\n", (STEP_3 / STEP_1));
	printf(" z = (det A3 / det A) = %d\n\n", (STEP_4 / STEP_1));
	

	printf(" if you wanna calculate 3x3 matrix, input y... or not, input n...\n");
	int y=1;
	int n=0;
	if (n == 0)
	{
		scanf_s("%d", &n);
	}

	else (y == 1);
	{

		scanf_s("%d", &y);

		printf(" input in order of example. you have to follow\n ex) a b c B1 d e f B2 g h i B3...... \n ax + by + cz = B1 \n dx + ey + fz = B2 \n gx + hy + iz = B3 \n");
		
		int a = 0;    //    ax + by + cz = B1
		int b = 0;    //    dx + ey + fz = B2
		int c = 0;    //    gx + hy + iz = B3
		int d = 0;
		int e = 0;
		int f = 0;
		int g = 0;
		int h = 0;
		int i = 0;
		int B1 = 0;
		int B2 = 0;
		int B3 = 0;

		scanf_s("%d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &B1, &d, &e, &f, &B2, &g, &h, &i, &B3);

		STEP_1 = (a * e * i) + (b * f * g) + (c * d * h) - (g * e * c) - (h * f * a) - (i * d * b);
		STEP_2 = (B1 * e * i) + (b * f * B3) + (c * B2 * h) - (B3 * e * c) - (h * f * B1) - (i * B2 * b);
		STEP_3 = (a * B2 * i) + (B1 * f * g) + (c * d * B3) - (g * B2 * c) - (B3 * f * a) - (i * d * B1);
		STEP_4 = (a * e * B3) + (b * B2 * g) + (B1 * d * h) - (g * e * B1) - (h * B2 * a) - (B3 * d * b);

		printf(" x = (det A1 / det A) = %d\n", (STEP_2 / STEP_1));
		printf(" y = (det A2 / det A) = %d\n", (STEP_3 / STEP_1));
		printf(" z = (det A3 / det A) = %d\n\n", (STEP_4 / STEP_1));

	}
	return 0;
}