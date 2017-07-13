#include <stdio.h>

//화씨를 도씨로 변환하는 프로그램 만들기
// 매크로 지정하기 화씨의 lower값은 0, upper 값은 300, STEP은 20씩 늘어나게함
#define LOWER 0
#define  UPPER 300
#define STEP 20

//for문을 사용하여 화씨가 0에서 부터 300까지 20씩 늘어날때 도씨의 값을 보여주기
int main()
{

//celsius 선언하기
	int celsius;
//for문과 define한 값을 사용하여 함수를 만들기 화씨에서 도씨로 변환하기
//print celsius to fahrenheit table

	printf("cel \t fahr\n");

	for (celsius = LOWER; celsius <=UPPER; celsius = celsius +STEP)

// 함수로 구해진 값을 보여줄때 십진수의 숫자, celsius , fahrenheit의 순서로보여주기

		printf("%d\t%d\n", celsius, ((celsius*(9/5))+32));
}

