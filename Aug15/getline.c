#include <stdio.h>
#include <ctype.h>
int gotline(char s[], int lim);

int main()
{
	int lim = 200;
	char s[500];
	
	
	printf("%d\n", gotline(s, lim));
	
}

int gotline(char s[], int lim)
{

	int c, i; 
	for(i=0; i <lim-1 && (c=getchar()) !=EOF && c!='\n'; i++)
	{
		s[i] = c;
	}
	if(c == '\n')
	{
	s[i] = c;
	i++;
	}
	s[i++] = '\0';
	return i;

}// \0과 뉴라인을 포함한 배열의 값을 보여줌 

