#include <stdio.h>
#include <ctype.h>

/* int main- array count program 
   1. define a function called main
   2. the type int 변수 c, i, nwhite, nother을 선언한다
   3. 10개의 type of int ndigit을 선언한다
   4. 변수를 초기화 한다
   5. for문을 이용하여, 0에서 10보다 작은 i를 1씩 증가시킨다.
   6. while문을 이용하여 사용자가 입력한 c가 EOF가 아니면 아래 조건문 실행
   6_1. if문 이용하여 조건문 만들기, c가 0보다 크거나 같고 c가 9보다 작거나 같으면 c-0한 ndigit에 1씩 증가시키기
   6_2. else if문을 이용하여 위의 if문이 참이아니고 else if 문이 참이면 number of white을 1씩 증가
   6_3. else문 이용하여 조건문 만들기 if문이 참이아니고 else if 문도 참이 아니면 nother을 1씩 증가
   7. printf 출력하기 
   7_1. for문을 이용하여 초기값 0부터 종료값9까지 i를 1씩 증가시킨다
   7_2. 출력하기 정수로 ndigit[i]의 형태로. 
   8. 출력하기 white space, other*/

int main()
{
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i<= 10; ++i)
	{
	  ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF)
	     if (c >= 'A' && c <= 'J')
	     {
		++ndigit[c-'A'];
	     }
	     else if (c == ' ' || c== '\n' || c == '\t')
	     {
		++nwhite;
	     }
	     else
	     {
		++nother;
	     }


	printf("\ndigits =|");
	for( i = 'A'; i <= 'J'; ++i)
	{
		printf(" %c |", i);
	}

	printf("\ndigits =|");
	for ( i = 0; i < 10; ++i)
	{
		printf(" %d |", ndigit[i]);
	}
	printf(", white space = %d, other = %d\n",
		nwhite, nother);
}

