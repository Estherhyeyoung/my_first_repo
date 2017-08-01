#include <stdio.h>
#include <string.h>
#include <ctype.h>
//매크로 값으로 MAXLINE 1000
#define MAXLINE 1000


//함수선언하기
int gotline(char line[], int max);
int strindex(char source[], char searchfor[]);
//변수선언 및 초기화
char pattern[] = "ould";

int main()
{
	// 변수 선언 및 초기화
	char line[MAXLINE];
	int found = 0;
	
	// while문 이용하여 조건문 만들기
	//gotline의 함수로 나온값이 0 보다 큰동안 if 조건문을 실행시킨다
	while (gotline(line, MAXLINE) > 0)
	//if문 이용하여 조건문 만들기
	   
// strindex로 반환된 int형 값이 0보다크거나 같으면 아래의 조건문을 실행시킨다.
	if(strindex(line, pattern) >= 0)
		{
			printf("%s", line);
			found ++;
		}
	return found; 
}
// gotline 함수는 \0을 포함하여 사용자로 부터 입력받은 문자열의 길이를 반환해준다.
/*gotline함수는 반환되는 타입이 int형이고, 두개의 인자를 갖는다. 
 첫번째 인자는 char 타입의 배열이고, 두번째 인자는 int형이다.*/
int gotline( char s[], int lim)
{
//변수선언 및 초기화
	int c, i;
	i = 0;
//while문을 이용하여 조건문을 만든다.
//1을 뺀 lim은 0보다 크고, 사용자가 입력한 값을 c에 할당해주고 그 값이 EOF아니고, c가 \n아닌동안 아래의 실행문을 실행시킨다.
	while (--lim >0 && (c=getchar()) != EOF && c != '\n')
	{
		s[i++] = c;
	}
//if 문을 이용하여 조건문을 만든다. c 가 \n이면아래의 실행문을 실행시킨다.
	if (c == '\n')
	{
		s[i++] =c;
	}
	s[i] = '\0';
//반환되는 값은 i이다
	return i;
}


//strindex함수는 첫번째 인자의 배열에서 두번째 인자를 만나는 위치를 찾고 그 위치를 반환해주는 함수이다.
/*strindex함수는 반환되는 값이 int형이고 인자를 두개 갖는다.
 첫번째 인자는 char 타입의 배열이고, 두번째 인자는 char타입의 배열을 인자로 갖는다.
 */
int strindex(char s[], char t[])
{
//변수선언하기
	int i, j, k;
//for문을 이용하여 변수 초기화 및 조건문 만들기
	for (i = 0; s[i] != '\0'; i++)
	{
	/*for문을 이용하여 하위 조건문 만들기.
	 초기값, 종료조건, 반환식 순으로 작성을 하며,for문 실행시 나가는 조건 즉 종료조건을 잘 보고 실행해야 함*/
		for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
			;
		if(k >0 && t[k] == '\0')
		{	
	//	두번째 for문의 반환 int형 i값 
		return i;
		}
	}
	// 첫번째 for문의 반환값
	return -1;
}

