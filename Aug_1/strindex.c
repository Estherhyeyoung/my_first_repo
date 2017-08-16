#include <stdio.h>
#include <string.h>
// 함수선언하기 
//strindex함수는 첫번째 인자 배열에서 두번째 인자와 같은 위치를 찾아 반환해주는 함수

int strindex(char s[], char t[])
{
//변수 선언하기
	int i, j, k;
//for문을 이용하여 조건문을 만들고 그 안에 변수 초기화 함
	for (i = 0; s[i] !='\0'; i++)
	{
	    for (j=i, k=0; t[k] !='\0' && s[j]==t[k]; j++, k++)
	        	;
            if (k > 0 && t[k] == '\0')
		return i;
	}
	return -1;
}

int main()
{
//변수 선언 및 초기화
	char H[6] = "hello";
	char L[3] = "lo";


		printf("%s\n", H);

		printf("%s\n", L);

// 변수선언

	printf("i found at = %d\n", strindex(H,L));

	
	
}
