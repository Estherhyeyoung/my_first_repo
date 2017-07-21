#include <stdio.h>

//함수선언해주기
int power(int m, int n);

int main()
{
//int i를 선언하기
	int i;

//for문 이용하여 출력하기
	for(i = 0; i < 10; ++i)
	{
	  printf("%d %d %d\n", i, power(2,i), power(-3,i));

	}
	  // printf(''%d %d %d", 매칭값1, 매칭값2, 매칭값3)
	 return 0;//코드가 return 까지 왔을때 0을 엔트리에 던져주는 것 

	
}
// 함수 선언하기 
int power(int base, int n)
{
	// int type의 변수선언하기
	int i, p;

	//변수 초기화
	p = 1;
	//for문을 이용하여 제곱값 계산하기
	for (i = 1; i <= n; ++i)
	{
		p = p * base;
	}
	// p라는 변수 반환해주기 

	return p;
}

