#include <stdio.h>

int main()
{
	//정수형 변수 진수별 표현법
	int a = 127;
	
	// printf("a의 값은 %d 진수로 %o 입니다. \n", 8, a);
	// printf("a의 값은 %d 진수로 %d 입니다. \n", 10, a);
	// printf("a의 값은 %d 진수로 %x 입니다. \n", 16, a);
	
	// printf("%d의 %d 진수 표현은 %o 입니다. \n", a, 8, a);
	// printf("%d의 %d 진수 표현은 %d 입니다. \n", a, 10, a);
	// printf("%d의 %d 진수 표현은 %x 입니다. \n", a, 16, a);
	
	printf("%o 은 %d 의 %d진수 표현입니다. \n", a, a, 8);
	printf("%d 은 %d 의 %d진수 표현입니다. \n", a, a, 10);
	printf("%x 은 %d 의 %d진수 표현입니다. \n", a, a, 16);
	
	return 0;
}