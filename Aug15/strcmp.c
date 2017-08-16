#include <stdio.h>

int main()
{
	/*0부터 1까지 증가시켜서 출력하기
	for(int i= 1; i < 11 ; ++i)
		printf("%d\n",i);*/
	//변수 선언하기
	char a[5] = "hey!";
	char b[6] = "hello";
	//함수선언하기
	strcmp(a,b);
	printf("%d\n",strcmp(a,b));
	//if 문을 이용하여 a 와 b를 비교하여 첫번째 문장이 크면 - / 두번째 문장이 크면 + 가 나오게 출력하기 
	/*if( strcmp(a,b) == 0)
	{
	    printf("a = b\n");
	}
	else if(strcmp(a,b) > 0)
	{
	    printf("a > b\n");	
	}
	else
	{
	    printf("a < b\n");
	}
	return 0;*/
	int c = strcmp(a,b);
	switch(c)
	{
		case '0':
		printf("a = b\n");
		break;
		default:
		printf("a와b는 같지않다.\n");
		break;
	}
// 스위치 문은 실수만 가능하고 수식은 안됨. 경우의 수를 다 넣어야 함. 
}

int strcmp(char* s, char* t)
{
	int i;
	for (i =0; s[i] == t[i]; i++)
	    {
	    if(s[i] == '\0')
		    return 0;
	    }
	return s[i] - t[i];
}
