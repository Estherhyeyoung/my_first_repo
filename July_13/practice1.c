#include <stdio.h>

/* line counting Count lines in input */
int main()
{
/* making space c and nl*/	
	int c, nl;
/* nl 초기화 하기*/
	nl = 0;
	while ((c = getchar()) != EOF)
	if (c == '\n')
		++nl;
	printf("%d\n" , nl);
// 사용자가 입력하였고 끝낸것이 아니면, c는 newline과 같다. nl에 1을 더하기
// ( 10진법의 정수에,nl으로 보여주기
}

