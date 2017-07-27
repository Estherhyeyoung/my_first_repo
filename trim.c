#include <stdio.h>
#include <string.h>
// 함수선언하기 
int trim(char s[])
{
	int n;
	for (n = strlen(s)-1; n >= 0; n--)
	{
		if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
		{
			break;
		}
	}
	s[n+1] = '\0';
	return n;
}

int main()
{
	char a[4] = {'a','b','c','\t'};
	int b; 
	printf("%d\n", trim(a));

	
}

