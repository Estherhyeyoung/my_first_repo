#include <stdio.h>

#define MAXLINE 10

//stack 배열의 갯수; 외부변수 선언
int stack[MAXLINE];
int top = -1;

int push (int val)
{
	if(top >= MAXLINE)
	{
		printf("This stack is FULL\n");
	}
	else
	{
		top += 1;
	//인자로 들어온 값을 top자리에 할당 
		stack[top] = val;
	}
	return stack[top];
}

int pop(void)
{
	int val;

	if( top < 0)
	{
		printf("This stack is empty\n");
	}
	else
	{
		stack[top];
		top -= 1;
	}
	return stack[top];
}

int main()
{
	/* 인자 2,3 5,7을 push함수를 이용하여 stack에 넣어주고
	   한번의 pop을 호출 한 뒤 출력하기*/

	push(2); push(3); push(5); push(7);

	pop();

	//for문을 이용하여 인자의 값을 stack구조로 출력하여 보여주기
	//top의 위치를 보여주기
	for(int i = top; i >= 0; --i)
	{
		printf("%d\n", stack[i]);
	}
		printf("top is %d in a stack\n", top);
	
}
