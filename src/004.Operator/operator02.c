#include <stdio.h>

//형변환(정수 -> 실수 : 가능 / 실수 -> 정수 : 불가능)
int main()
{
	int a=10;
	double b=3;
	
	printf("a / b 는 : %d \n", a / b);	//실수형 변수를 출력시 정수형으로 출력했기 때문에 형변환 오류 발생
	printf("b / a 는 : %f \n", b / a);	//올바른 형변환
	
	return 0;
}