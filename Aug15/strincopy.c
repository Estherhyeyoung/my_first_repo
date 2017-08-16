#include <stdio.h>
//strcpy 함수를 사용하여 a, b의 문장중 b문장을 복사하여 a에 붙여넣기 
int main()
{
	//변수 선언하기
	char a[7] = "hello!";
	char b[7] = "yellow";
	/*char* c = &a;
	char* d = &b;*/

	//원래 문장 출력하기
	printf("a : %s, b : %s\n", a,b);
	//함수 선언하기
	strcpy(a,b);
// a,b를 넣은 것은 배열 자체가 주소값을 갖기 때문에 char*c =&a를 할 필요가 없음 

	//함수를 통해 복사된 a출력하기
	printf("a : %s\n", a); 
			
}

void strcpy(char* s, char* t)
{
	while((*s = *t) != '\0')
	{
		s++;
		t++;
	}
}

