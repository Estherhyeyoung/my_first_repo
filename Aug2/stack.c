#include <stdio.h>

#define MAXLINE 10

//함수선언
int push(int num);
int pop(void);

// 외부 변수 입력
int val[MAXLINE];
int sp = -1;

int main()
{
// 2, 3, 5, 7 를 받아서 넣기
	push(2);
	push(3);
	push(5);
	push(7);

	pop();

	for(int i= sp; i >=0 ; --i)
	{
		printf("%d", i);
	}
	printf("\n");
}


//push 함수입력, stackpoint가 맥스라인보다 작으면 
int push(int f)
{
/*	if (sp < MAXLINE)
	    val[sp++] = f;
	else 
		printf("error : stack full, can't push %d\n",f);
}*/

	if(sp >= MAXLINE)
	{
		printf("error : stack full, can't push %d\n",f);
	}
	else 
	{
		sp +=1;
		val[sp] = f;
	}
	return val[sp];

}

/*pop이라는 함수는 stack에 넣어준 값을 꺼내는 것. 
sp는 
 */
int pop(void)
{

/*	if(sp < 0)
		return val[--sp];
	else
	{
		printf("error : stack empty\n");
*/
	int out;
//stackpoint가 0보다 작을때 empty를 보여주고 그것이 아닐때 배열의 sp가 가르키고 있는 값을 out(꺼내는것)에 할당 하고 sp는 1 감소시킨다.
	if( sp < 0 )
	{
		printf("error : stack empty\n");
	}
	else
	{
		out = val[sp] ;
		sp -= 1;
	}
	return out;
	
}

