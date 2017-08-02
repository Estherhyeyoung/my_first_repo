#include <stdio.h>
// 함수선언하기 
//strindex함수는 첫번째 인자 배열에서 두번째 인자와 같은 위치를 찾아 반환해주는 함수

int strindex(char s[], char t[])
{
//변수 선언하기
	int i, j, k;
//for문을 이용하여 조건문을 만들고 그 안에 변수 초기화 함
	for (i = 0; s[i] !='\0'; i++)
	{
	    for (j=i, k=0; t[k] !='\0' && s[j]==t[k]; j++, K++)
	        	;
            if (k > 0 && t[k] == '\0')
		return i;
	}
}

int main()
{
//변수 선언 및 초기화
	char H[6] = "hello";
	char L[3] = "lo";

//for 문을 이용하여 조건문 만들기	
	for (int i= 0; i < 7 ; i++)
	{
		printf("%s\n", H[i]);

		printf("%s\n", L[i]);
	}

int strindex(H, L);

	for(int i =0; i < 7 ; i++)
	{
		printf("%s\n", H[i]);
	}
}
