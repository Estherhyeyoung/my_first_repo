#include <stdio.h>
#include <ctype.h>

#define IN 1
#define OUT 0
/*문자와 줄과 단어, 입력되는 것과 상태를 카운트 하는 프로그램만들기
  1. 매크로 값을 입력하기 IN = 1 , OUT =0
  2. main entry입력하기
  3. 변수 선언하기 c, nl, nw, nc, stae;
  4. 변수 초기화 하기 state = OUT, nl=nw=nc=0
  5. while문을 이용하여 c= getchar가EOF아닌 동안 nc를 1씩 증가시킨다
  5.1 if문을 이용해서 nl개수 증가, if문 이용하여 공백이 있을 경우 상태를OUT으로 한다
  5.2 2번째 if문의 조건이 아니고 상태가 아웃일때 워드갯수 증가하기
  6. 출력하기 */

int main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;

	while((c = getchar()) != EOF)
	{
		++nc;
		if(c == '\n')
		{
		  ++nl;
		}
		if(c == ' ' || c == '\n' || c == '\t')
		{
		  state = OUT;
		}
		else if (state == OUT) 
		{ 
		  state = IN;
		  ++nw;
		}
	}
	printf("=====================\n");
	printf("number of line: %d\n", nl);
	printf("number of word: %d\n", nw);
	printf("number of ch: %d\n", nc);
}	

