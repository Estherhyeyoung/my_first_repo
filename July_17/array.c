#include <stdio.h>
#include <ctype.h>

/* int main- 배열 카운트 하는 프로그램 
   1. define a function calld main
   2. the type int 변수 c, i  nwhite, nother을 선언한다
   3. 10개의 type of int ndigit을 선언한다
   4. 변수를 초기화 한다
   5. for 문을 이용하여, 0에서10보다작은i를 1씩 증가시킨다.
   6. while문을 이용하여 사용자가 입력한 c가 EOF가아니면 아래 조건문을 실행시키기
   6_1. if문 이용하여 조건문 만들기. c가 0보다 크거나 같고 c가 9보다 작거나 같으면 c-0한ndigit에 1씩 증가시기 
   6_2. else if 문을 이용하여 위의 if조건문이 아니면 else if문이 참이면 number of white을 1씩 증가시키기 
   6_3. else문으로 조건문 만들기.두개의 조건문이 참이 아니면 nuber of other을 1씩 증가시키기
   7. pritf 출력하기, 
   7_1. for문을 이용하여 초기값 0부터 종료값9까지 i를 1씩 증가시킨다
   7_2. 출력하기- 정수로 ndigit[i]의 형태로 
   8. 출력하기 white space, other
   result  : digits = 9312345600, white space*/

int main()
{
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i <10; ++i)
 	{		
	  ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF)
             if (c >= '0' && c <= '9')
	     {
	       ++ndigit[c-'0'];
	     }
	     else if (c == ' ' || c == '\n' || c == '\t')
	     {
	       ++nwhite;
	     }
	     else
	     {
	       ++nother;
	     }

	printf("digits =");
	for (i = 0; i < 10; ++i)
	    printf(" %d", ndigit[i]);
	printf(", white space =  %d, other = %d\n",
	       nwhite, nother);
}
