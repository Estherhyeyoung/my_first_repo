#include <stdio.h>

/* 화시를 도시로 바꿔서 보여주는 프로그램 작성하기*/

int main()
{
// 변수를 선언하기
	float fahr, celsius;
	float lower, upper, step;

//변수값 할당하기_초기화하기
	lower = 0; upper = 300; step = 20;

	fahr = lower;

// while 문 이용하여 조건문 만들기
	printf("Fahr\tCel\n");
	while (fahr <= upper)
	{
	celsius = 5.0 * (fahr-32) / 9.0;
	printf("%3.0f\t%6.1f\n", fahr, celsius);
	fahr = fahr + step;
	}	
}

