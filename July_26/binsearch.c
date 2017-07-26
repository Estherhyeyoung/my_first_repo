#include <stdio.h>
 /*binsearch 함수는 리턴타입이 int형이고 인자를 세개 갖는다.
   그 세개의 인자중 첫번째는int형 인자이고 두번째는 int형 배열이고, 세번째는 int형 인자이다. 

  */

//함수선언하기
int binsearch(int x, int v[], int n)
{
	//변수선언
	int low, high, mid;
	
	//변수 초기화
	low = 0;
	high =n -1;

	//while문으로 조건문을 입력하기
	while (low <= high)
	{
		mid = (low+high)/2;
		
		if (x < v[mid])
		{
			high =mid +1;
		}
//함수이해하고 어떻게 쓰이는지 
//함수활용하여 코드 작성하기
		else if (x > v[mid])
		{
			low = mid +1;
		}
		else
		{
			return mid;
		}
	}
	return -1; 
}
