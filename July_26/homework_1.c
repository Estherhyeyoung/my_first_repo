#include <stdio.h>
/* A: hello, It's been a long time to see you.
B : how are you? going well. you do? 의 각각의 문장을 나누어 보여주고 한문장으로 이어 붙여 보여주기 */
/*함수선언하기
 인자 선언하기
 원래의 문장 출력하여 보여주기 
 for 문을 이용하여 조건문을 만들고 strcat의 함수를 이용하여 결과값 보여주기*/

void strcat(char s[], char t[])
{
	int i, j;
	i = j = 0 ;
	while (s[i] != '\0') 
	{
		i++;
	}
	while ((s[i++] = t[j++]) !='\0')
		;
}

int main()
{
	char A[100] = " A: hello, It's been a long time to see you.";
	
	char B[60] = " B: how are you? going well. you do?" ;
	int i;
	
	for (i = 0; i < 100; i++)
	{	
		printf("%c", A[i]);
	}
	printf("\n");

	for (i =0; i < 60; i++)
	{
		printf("%c", B[i]);
	}
	printf("\n");

	strcat(A, B);
	for(i = 0; i <100 ; i++)
	{
		printf("%c", A[i]);
	}
	printf("\n");

}
