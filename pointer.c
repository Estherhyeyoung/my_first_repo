#include <stdio.h>

int main()
{
	int a = 5;
	int b = 2;

	printf ( "a의 주소: %x,  값: %d,  %d", &a, a, *&a);
	printf ("\n");
	printf ( "b의 주소:  %x, 값 : %d, %d\n", &b, b, *&b);
}
