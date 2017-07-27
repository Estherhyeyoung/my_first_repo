#include <stdio.h>

/* 이어쓰기함수- stract 함수는 리턴타입이 void이고 인자를 두개갖는 함수이다. 첫번째 인자는 char type의배열이고, 두번째 인자는 char type의 배열을 인자로 갖는다.

 stract 함수의 역할은 배열끼리 이어붙여주는역할을 한다. - 두개의 문장을 연결시켜주는 함수*/
void stract(char s[], char t[])
{
	int i, j;

	i = j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while ((s[i++] = t[j++]) != '\0')
		;

}
//두개의 문장 선언하기
//각각의 문장 출력하기
//하나의 문장으로 이어붙여주기-stract함수이용
//하나의 문장으로 출력하기
int main()
{
	char intro[20] = "hello";
	char y[10] = "hyeyoung";
	int i;


	printf("origin : ");
	for(i =0; i < 7; ++i)
	{
		printf("%c",intro[i]);
	}
	printf("\n");
	for (i = 0; i < 9 ; ++i)
	{
		printf("%c",y[i]);
	}

	printf("\n");

	// stract함수불러오기 같은 포맷으로 써야함
	stract(intro, y);

	// for문 종료조건이 거짓일때for문이 종료됨 
	for(i = 0; intro[i] != '\0' ; i++)
	{
		printf("%c", intro[i]);
	/* intro[i]를쓴 이유는stract함수에서 첫번째 인자의 값에 두번째 인자값을 붙여 출력하기 때문에 첫번째 인자의 값인 intro[i]를 사용*/
	}

	printf("\n");
}

