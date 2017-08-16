#include <stdio.h>

//char c 는 'A'의 값을 갖고 있고 pointer char* cp 로 'A'를 출력하기
int main()
{
	char c = 'A';
	char* cp = NULL;
//여기서cp는 포인터타입(주소값)이기 때문에 받는 값도 포인터타입(주소)이여야함
	cp = &c;

	printf("pointer cp 가 가르키는 주소값 : %d\n", cp);

	printf("pointer cp 가 가르키는 값 : %c\n", *cp);
}
