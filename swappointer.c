#include <stdio.h>

// 인자 a 와 b를 출력하고 
// swap pointer로  값을 출력하기 
void swap(int* px, int* py);

int main()
{
	int a = 5;
	int b = 2;
	printf("a와 b의 값 : %d, %d \n", a,b);
	
	swap(&a, &b);

	// 
	printf("a와 b의 값 : %d, %d\n", a,b);
}


	void swap( *px, *py)
	{
	   int temp;
	 
	   temp = *px;
	   *px = *py;
	   *py = temp;
	}


