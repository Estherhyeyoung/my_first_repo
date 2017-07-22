#include <stdio.h>

//변수선언하기
int main()
{
	int y;

	y = 2017;

	printf("This year : %d\n", y);

	if ( (y % 4 == 0 && y %100 !=0) || y % 400 == 0)
	{
	    printf("%d is a leap year\n", y);
	}
	else 
	{
	    printf("%d is not a leap year\n", y);
	}
}
