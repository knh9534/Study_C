#include <stdio.h>

//대입 연산자
int main()
{
	int a = 3;	// = 의 의미 : 오른쪽 값을 왼쪽에 대입
	a = a + 3;	// + 를 = 보다 먼저 연산(연산자 우선순위)
	
	printf("a 의 값은 : %d \n", a);
	
	return 0;
}