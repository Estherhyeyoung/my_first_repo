#include <stdio.h>
/*
void swap (int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}*/

void swap(int* px, int* py)
{
	int temp;

	temp = *px;
	*px = *py; 
	*py = temp;
}

int main()
{
	int x = 2;
	int y = 3;

	int* ppx = &x;
	int* ppy = &y;


	printf("x값 %d : y값 %d\n", x,y);
	swap ( ppx, ppy);
	printf("x값 %d : y값 %d\n", x, y);
}
