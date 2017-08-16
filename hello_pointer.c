#include <stdio.h>
//char hi[6] hello라는 배열을 pointer sp를 가지고, for문을 사용하여 출력하기

int main()
{
	//인자 선언 및 초기화
	char hi[6] ="hello";
	char* sp = NULL;

	sp = hi;

	// for 문 이용하여 pointer sp가 가르키고 있는 hi배열의 주소값 위치를 1씩 증가시킨다.
	for(int i = 0; i < 6; i++)
	{
		printf("%c", *(sp+i));
	}
	printf("\n");
}

	// 출력하기, 출력은 pointer sp 가르키고 있는 hi 배열이 갖는 주소값의 값. 
