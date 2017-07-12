#include <stdio.h>

//new line tab count in input
int main()
{
/* making space c and nt*/
	int c, nt;
//nt 초기화값주기
	nt = 0;
	while ((c = getchar()) != EOF)
		if(c == '\n')
		   ++nt;
	printf("%d\n", nt);
//사용자가 입력하고 끝내는 동안 c는 n과 같다. nt에 1을 더하기
}

