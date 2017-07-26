#include <stdio.h>
#include <string.h>

/*reverse함수는 리턴타입이 void 이고 인자를 하나를 갖는다. 
 그 인자는 char 타입의 배열이다.
reverse함수는 입력한 배열을 반대로 나열하여 준다.*/
void reverse(char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s)-1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
int main()
{
	//char 배열 선언 및 초기화
	char A[7] = "elgoog";
	// char A 배열 출력
	for(int i = 0; i < 8 ; ++i)
	{
		printf("%c", A[i]);
	}

	printf("\n");


	//reverse(A)함수사용하기
	reverse(A);

	//함수통해 변환된 배열 A출력하기
	for(int i = 0; i < 8 ;  ++i)
	{
		printf("%c", A[i]);
	}
	printf("\n");
}


