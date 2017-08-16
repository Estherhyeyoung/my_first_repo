#include <stdio.h>
// fahr -celsius 변환하기
// fahr 20 도씩 변화될때 celsius 변화되는 것 나타내기 

int main()
{
// 변수(fahr, cel, lower, upper, step) 선언 및 초기화하기
	int fahr; 
	int cel ;
	int lower;
	int upper;
	int step;

	fahr = 0;
	lower = 0;
	upper = 300;
	step = 20;
// for 문 통해서 수식 입력하기 20도씩 변화될때마다 화씨 변하는것 출력하기	
	printf(" fahr	cel\n");
	for(fahr = lower; fahr <= upper; fahr += step )
	{
		 cel = 5*(fahr-32)/9;
		 printf("%d	%d\n", fahr, cel);
	}
}
