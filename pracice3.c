#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

//print celsius- fahrenheit table
// for celsius = 0, 20, ...., 300; floating-point version
int main()
{
	float celsius;	

	for (celsius = LOWER; celsius <= UPPER; celsius = celsius +STEP)
		printf("%3f %6.2f\n", celsius, (9.0/5.0)/(celsius+32));
}
	
