#include <stdio.h>

int bitcount(unsigned x)
{
	int b;

	for (b = 0; x != 0; x >>= 1)
	{
		if( x & 01)
		{
		b++;
		}
	}
	return b;
}

/* entry point
  1. 변수 선언하기
  2. 변수 초기화하기
  3. 20을 bitcount 하기*/
int main()
{
/* bitcount함수의 인자 자체가 unsigned 이기 때문에 어떤 값이든 올 수 있음
변수를 따로 선언할 필요 없이 bitcount의 반환값을 출력할 수 있음*/
	printf("%d\n", bitcount(20));
}




