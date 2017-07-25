#include <stdio.h>

/*  1부터 6까지 출력하기 
    1. 엔트리 포인트 입력하기
    2. 메모리값 할당하기- 변수 선언하기 
    3. 변수값 초기화 하기
    4. for 문을 이용하여 값을 출력하기 */
int main()
{
	int i;
	//for문(시작값, 종료조건, 변환식)
	for(i = 1; i < 7; ++i)
	{
		printf("%d\t",i);
	}
	printf("\n");
}
