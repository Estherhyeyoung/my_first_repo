#include <stdio.h>
/*sum()을 호출하였을때 ()의 n까지의 합을 구하기
 sum(10) 이라면 1+2+3+4+5...+10 까지 한 합 55 를 구하기
 */
int sum(int n)
{
// sum재귀 함수의 인자n이 1보다 작으면 0을 반환하고
// 호출한 자리로 돌아갈때 n 과 그 전의 함수를 더하게 만들어 준다
// 0을 반환했을때 리턴 식은- 1+sum(0)- 2+sum(sum1(0+1)).....n= 5 n+sum(4)
	if (n ==0)	
	{ 
	    return 0;
	}

	//재귀함수 호출
	return n + sum(n-1);
}

int main()
{
//sum()함수를 통해 합산된 반환된 int형 값을 대시몰 값으로 출력하기

	printf("%d is 1부터 10까지의 합", sum(10));
	printf("\n");	
}

