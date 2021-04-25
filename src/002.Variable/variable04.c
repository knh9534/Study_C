#include <stdio.h>

int main()
{
	//실수형, 정수형 변수 출력법
	float a = 3.141592f;
	double b = 3.141592;
	int c = 123;
	
	printf("실수 a : %.2f \n", a);	//소수점 이하 2자리까지 표시
	printf("실수 b : %6.3f \n", b);	//전체 자릿수 6자리, 소수점 이하 3자리
	printf("정수 c : %5d \n", c);		//숫자 자릿수 5자리(정수로 표현) 표시
		
	return 0;
}