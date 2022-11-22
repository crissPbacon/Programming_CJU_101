#include<stdio.h>

typedef enum { CYAN, MAGENTA, YELLOW = 5, BLACK }COLOR;
typedef enum { UP, DOWN, LEFT, RIGHT }ARROW;

int main(void)
{
	COLOR my_color = YELLOW, c;
	ARROW direction = UP;

	for (c = CYAN; c <= BLACK; c++)		//		0~6까지
	{
		direction++;
		direction = direction % 4;
		if (c == my_color)
		{
			break;
		}
	}

	switch (direction)
		{
		case UP:printf("현재 방향 : 위"); break;
		case DOWN:printf("현재 방향 : 아래"); break;
		case LEFT:printf("현재 방향 : 좌"); break;
		case RIGHT:printf("현재 방향 : 우"); break;
		}

		return 0;
}