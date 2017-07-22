#include <stdio.h>

int atoi(char s[]);

int main()
{
	char num[10] = "2016";

	printf("%d\n", atoi(num));
}
int atoi(char s[])
{ 
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9' ; ++i)
	{
		n = 10 * n + (s[i] - '0');
	}
	return n;
}

