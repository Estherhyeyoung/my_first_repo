#include <stdio.h>
//함수선언하기 
/*shellsort의 함수는 무작위로 쓰여진 배열을 정렬해주는 함수*/
void shellsort(int v[], int n)
{
	//변수선언하기
	int gap, i, j, temp;
	
	//for문을 이용하여 조건문 만들기 
	for (gap = n/2; gap > 0; gap /= 2)
	{
		for( i = gap; i < n; i++)
		{
			for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap)
			{
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
		
			}
		}
	}
}

int main()
{
	//변수 선언 및 초기화하기
	int a[6] = {2, 10, 11, 3, 5, 6};
	int num = 6; 
	int i;

	printf("origin array : ");

	for (i = 0; i <6; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	shellsort(a, num);
	printf("sort array :");
	
	for (i = 0; i <6; i++)
	{
		printf("%d ", a[i]);
	}


	printf("\n");
}
	

			
