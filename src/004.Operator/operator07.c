#include <stdio.h>

//비트연산자
int main()
{
	int a = 1, b = 2; //1 = 00000001, 2 = 00000010
	
	printf("a : %d \n", a);
	printf("b : %d \n", b);
	printf("\n");
	printf("a & b : %d \n", a & b);	//00000000	AND
	printf("a | b : %d \n", a | b);	//00000011	OR
	printf("a ^ b : %d \n", a ^ b);	//00000011	XOR
	printf("~a : %d \n", ~a);		//11111110	~연산(반전)
	printf("a << 2 : %d \n", a << 2);	//00000100 a를 왼쪽으로 2만큼 쉬프트
	printf("b >> 1 : %d \n", b >> 1);	//00000001 b를 오른쪽으로 1만큼 쉬프트
	
	return 0;
}