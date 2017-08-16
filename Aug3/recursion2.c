#include <stdio.h>

void hello(int num)
{
	/* for문을 사용할때 무한루프(무한반복)에 빠지지 않도록 for문 내에서 for문을 탈출하기 위한(종료조건) 조건을 정해준다. 
	재귀함수(recursion function 역시 마찬가리로 자기자신을 호출하는 패턴을 끝내기 위한 탈출조건을 만들어야 함. 
	이것을 base case-기저조건
	 */
	if(num == 0)
//return 을 만났을 함수를 종료하고 함수를 호출한자리로 돌아가라. 
	return ;

	printf("hello\n");

	//재귀함수 호출
	hello(num-1);
}

int main()
{
//hello가 5번 출력 됨. 

	hello(5);
}

