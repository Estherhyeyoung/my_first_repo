#include <stdio.h>

//함수선언하기
/*binsearch 함수는 반환타입이 int형이고 인자는3개를 갖는다 .
 첫번째 인자는 int형 인자이고, 두번째는 int형 배열이고 세번째로 int형 인자를 갖는다. 
 binsearch 함수는 첫번째 인자를 n개의 v라는 배열의 몇번째에 있는 것이 x 인지 찾아주는 함수이다.
 배열은 순서대로 나열되어 있어야만 된다. */
int binsearch(int x, int v[], int n)
{
	//변수 선언하기
	int low, high, mid;

	//변수 초기화
	low = 0;
	high = n -1;

	//while문 이용하여 조건식만들기
	while (low <= high)
	{
		//mid 변수 선언 및 초기화
		mid = (low+high)/2;
		//if문 이용하여 조건문 만들기
		if(x < v[mid])
		{
			high = mid +1;
		}

		//if의 조건이 참이 아닐경우 else if 문을 이용하여 조건문 만들기
		else if (x > v[mid])
		{
			low = mid + 1;
		}
		//else if 문의 조건이 참이 아닐경우 else문을 이용하여 조건문 만들어  return 반환값 mid를 출력
		else 
		{
			return mid;
	
		}
	}
	return -1;
}

//entry point
int main()
{
	//변수 선언 및 초기화.int형 7개의 배열array를 만들고 12345678을 할당하기
	int array[8]={1,2,3,4,5,6,7,8};
	
	//for문을 이용하여 조건문 만들기
	printf("print array : ");

	for(int i = 0; i <8; i++)
	{
		printf(" %d",array[i]);
	}
	printf("\n");
	
	printf("find number 2 where is ?\n");
	printf("found at the %d in array.\n", binsearch(2, array, 8)); 
}
