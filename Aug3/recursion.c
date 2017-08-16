//hello라는 함수는 hello 을 출력하는 함수만 있음(리턴타입이 void, 인자도 void
//이것을 메인에서 hello() 호출했을때 hello가 출력되게 프로그램 짜기
#include <stdio.h>

//함수 선언하기
void hello(int num)
{
	char h[] = "hello";
	int i;

	for(i = 0; h[i] != '\0' ; ++i)
	{
		printf("%c", h[i]);
	}
	printf("\n");

	hello();
}

// main entry point 입력하기
int main()
{
	//함수 호출하여 hello 출력하기
	hello();
}
