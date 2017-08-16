#include <stdio.h>

int main()
{
	int array[3] = {10, 20, 30};
	int* p = NULL;

	p = array;

	printf("array[0]번째 : %d, %d, %d\n",  *p, *p+0,*(&p[0]));
	
	printf("array[0]번째 : %d, %d, %d\n", array[0],*&array[0],*(array+0)) ;
	printf("array[0]번째 주소값 %d\n", &p[0]);
	printf("array[1]번째 주소값 %d\n", &p[1]);
	printf("array[2]번째 주소값 %d\n", &p[2]);
	printf(" pointer p의 크기 : %d\n", sizeof(p));

	p = p+1;
	printf("p의 값 출력 : %d\n", *p);

}



