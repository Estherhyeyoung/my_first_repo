#include <stdio.h>

//entry point 
 int main()
{
	int iyear = 2017;

	printf("This year : %d\n", iyear);

	for (iyear; iyear < 2021 ; ++iyear)
	{
		if((iyear % 4 == 0 && iyear % 100 != 0) || iyear % 400 ==0)
		{ 
		    printf("%d is a leap year\n", iyear);
		}
		else
		{
		    printf("%d is not a leap year\n", iyear);
		}
	}
}

