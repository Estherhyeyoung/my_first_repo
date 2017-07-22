#include <stdio.h>

//문자배열의 문자카운트 출력하기
//entry point 입력하기
int strlen(char s[]);

int main()
{
	char array[10] = {'H', 'i'};
	int num = strlen(array);
	
	printf("%d\n", num);

}

int strlen(char s[])
{
	int i=0;

	while (s[i] != '\0' )
	{
		++i;
	}
	return i;
}
