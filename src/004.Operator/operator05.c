#include <stdio.h>

//전위, 후위 연산자
int main()
{
	int a = 1;
	
	//전위 연산자 : 값을 더한 후 결과를 반환
	printf("++a : %d \n", ++a);	// a = 2, 출력 2
	
	a = 1;
	
	//후위 연산자 : 결과를 반환 후 값을 더함
	printf("a++ : %d \n", a++); // 출력 1, a = 2
	printf("a : %d \n", a);	// a = 2
		
	return 0;
}