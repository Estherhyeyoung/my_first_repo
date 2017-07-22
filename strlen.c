#include <stdio.h>

//문자배열의 문자카운트 출력하기
//entry point 입력하기
int strlen(char s[]);

int main()
{
	char array[10] = "hello";
	int num = strlen(array);
	
	printf("%d\n", num);

}

int strlen(char s[])
{
	int i;

	while (s[i] != '\0' )
	{
		++i;
	}
	return i;
}
