#include <stdio.h>

/* 라인 세는 프로그램 만들기
	1. entry입력 
	2. c와 t의 변수 선언하기
	3. t 변수 초기화 하기
	4. while문을 사용하여 사용자가 입력한값이 cd이고, EOF하는 동안
	   c가 't'일때 t에 1씩 증가한다
	5. 정수와 새로운 라인으로 출력하기*/

int main()
{
	int c, t;

	t = 0;
	while((c = getchar()) != EOF)
		if (c == '\t')
			++t;
	printf("%d\n", t);
}

