#include <stdio.h>
#include <string.h>
// 함수선언하기 
int trim(char s[])
{
	int n;

	for(n = strlen(s)-1; n >= 0; n--)
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
//캐릭터 배열에서는 항상자동으로 \0값을 포함
{
	char a[5] = {'a','b','c','\t'};
	
	printf("%d\n", trim(a));

	
}

