#include <stdio.h>
#include <ctype.h>
#define MAXLINE 1000
//사용자가 입력한 값중에 가장 긴 값을 출력하기
//매크로 값을 주기
/*int type의 gotline이라는 함수는 char type의 line이라는 배열과 int type의 maxline이라는 두개의 인자를 갖는 함수이다*/
/*void copy라는 함수는 char type의 to라는 배열과 char type의 from이라는 배열, 두개의 인자를 갖는 함수이다*/
int gotline(char line[], int maxline);
void copy(char to[], char from[]);
// main entry point 
int main()
{
// int type 변수 선언하기
	int len, max;
	char line[MAXLINE];
	char longest[MAXLINE];
//변수 초기화 하기
	max= 0;
//while문 이용하여 line과 MAXLINE을 인자로 갖는 gotline함수의 값을 len에 할당하고 이가 0보다 크면(참이면) if조건문을 실행한다
	while ((len = gotline(line, MAXLINE)) > 0)
//if문을 이용하여 len이 max보다 크면, len을 max에 할당하고 copy한다. 
		if (len > max) 
	     {
	      max = len;
	      copy(longest, line);
	     }
//if문을 이용하여 max가 0보다 크면 가장큰값을 출력한다.
	if( max > 0) 
	   printf("%s", longest);
//return이란 함수는 반환값 0로 출력한다.
	return 0;
}
//int type의 gotline함수 선언하기-char type의 s라는 배열과 int type의lim라는 인자를 갖고있음
int gotline(char s[], int lim)
{
// 변수 선언하기
	int c, i;
//for문을 이용하여 초기값0부터 사용자가 입력한 값이 lim-1이고, EOF가 아니고 \n 아니면 i를 1씩 증가시키고 아래 식을 실행한다
	for (i=0; i <lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
	{
//c를 s라는 이름의i배열에 할당한다.
 	  s[i] = c;
	}
//if문을 이용하여 c가 \n이면 c를 s라는 이름의 i에 할당하고, i를 1씩 증가시킨다. 
	if(c == '\n')
	{
	 s[i] = c;
	 ++i;
	}
//if의조건이 참이 아니면 \0 을 s라는 i배열에 할당하고 반환값은 i이다.
	s[i] = '\0';
	return i;
}
//void copy 함수를 선언한다
void copy(char to[], char from[])
{
//변수 i를 선언한다. 변수 i초기화 한다.
	int i;
	i = 0;
//while문을 이용하여 \0아니면 from의i배열을 to의 i배열에 할당하고 i를 1씩 증가시킨다.
	while ((to[i] =from[i]) != '\0')
	{
	  ++i;
	}
}

