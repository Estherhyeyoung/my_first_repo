#include <stdio.h>
#include <stdlib.h>

//스왑함수 선언하기 
//스왑함수는 배열의 두번째 인자와 첫번째 인자를 바꾸어주는 함수이다.
void swap (int v[], int i, int j)
{ 
	//변수 선언하기
	int temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

//퀵소트 함수선언하기
/*퀵소트 함수는 배열의 pivot을 기준으로 왼쪽에는 pivot보다작은 수
  오른쪽에는 pivot 보다 큰수가 오도록 하여 두개로 나누어 정렬을 하는 함수이다.
리턴타입이 void 타입이고 인자로는 세개를 갖는다. 첫번째는 인트형 배열, 두번째는 인트형 인자, 세번째로 인트형 인자를 갖는다.
 */
void Qsort(int v[], int left, int right)
{
	//변수 i와 last , 스왑을 선언하기
	int i, last, pivot; 
	//if문으로 배열이 있는지 확인하고 예외처리조건을 넣어준다. 
	if(left>=right)
	{
	    return; 
	}
//변수의 값을 초기화 하기
	last = left; 
	pivot = (left+right)/2;
	//pivot(기준값)을 정해준다.
	swap(v, left, pivot);
//for문을 통해i를 증가시키고,배열의 i 번째의 배열이 v 번째의 배열보다 작으면 last를 1증가시키고 last와i를 증가시켜라. 
	//last는 pivot보다 작은 수를 카운크 하기위함
	for(i= last+1; i <=right; i++)
	{
		if(v[i]<v[left])
		{
		   ++last;
		   swap(v, last, i);
		}
	}
	//스왑문을 통해 left와 last를 바꾸기
	swap(v, left, last);
	//qsort문을 통해 pivot보다 작은 값을 정렬하기
	Qsort(v, left, last-1);
	//qsort문을 통해 pivot보다 큰 값을 정렬하기
	Qsort(v, last+1, right);
}

int main()
{
	//변수 선언 : arr 4,2,3,5, index i
	int arr[] = {4, 2, 3, 5};
	int i;
	int first = 0;
	int last = 3;
	// for문으로 인덱스 i를 증가시켜 arr배열을 출력하기
	printf("origin array :" );
	for(i=0; i < 4; ++i)
	{
	   printf(" %d", arr[i]);
	}
	printf("\n");
	//함수 호출qsort 
	Qsort(arr, first, last);

	//출력하기 
	printf("after array : ");
	for(i=0; i < 4; i++)
	{
	   printf(" %d", arr[i]);
	}
	printf("\n");

}
