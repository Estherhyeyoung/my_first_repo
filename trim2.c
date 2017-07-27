#include <stdio.h>
#include <string.h>

int trim(char s[]);

int main()
{
	char array[4] = {'a','b','c','\t'};
	

	printf("%d", trim(array));
	printf("\n");
	trim(array);
	for(int i = 0; array[i] != NULL; i++)
	{
		printf("%c\n", array[i]);
	}
}

int trim(char s[])
{
	int n;

	for(n = strlen(s)-1; n >= 0; n--)
	{
		if(s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
		{
			break;
		}
	}
	s[n+1] = '\0';
	return n;
}
