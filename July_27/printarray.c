#include <stdio.h>

//print array 출력하는 프로그램 만들기

// entry point 입력하기
int main()
{
	//변수 선언하기 및 초기화하기
	char c[15] = "hello, world!";

	//for문을 이용하여 배열초기화 하고 출력하기
	for(int i = 0; i < 15 ; i++)
	{
		//c[i]배열을 출력하기
		printf("%c", c[i]);
	}
	printf("\n");
}
