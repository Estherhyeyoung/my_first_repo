#include <stdio.h>

//함수선언하기
//함수의 변수이름이 같다하여도  main에는 전혀 영향을 미치지않음
//함수와 main은 별개!!!
void squeeze(char s[], int c);

int main()
{
	//변수 선언 = 역할은  squeeze 함수의 인자로사용할것이다
	char hi[9] = "hi,lilly";
	int a = 'i';
	
	printf("origin : ");
	for (int i = 0; i < 9 ; i++)
	{
	//출력할때 꼭 출력하고자 변수 타입확인할것!!!
		printf("%c", hi[i]);
	}
	printf("\n");

//squeeze함수사용
	printf(" after : ");
	squeeze(hi, a);

	for(int i = 0; i < 9 ; i++)
	{
		printf("%c", hi[i]);
	}
	printf("\n");
}
/* squeeze함수는 리턴타입이 void(반환값이 없는함수)이고 2개의인자(매개변수)를 가지고 있다. 그 첫번째 인자는 char 타입의 배열이고 int 타입의 인자를 갖는다.
   squeeze함수는 첫번째 인자에서 두번째 인자를 제거하는 역할을 한다.*/

void squeeze(char s[], int c)
{
	int i, j;

	for(i = j = 0; s[i] != '\0'; i++)
	{
		if (s[i] != c )
		{
			s[j++] = s[i];
		}
	}
	s[j] = '\0';
}



