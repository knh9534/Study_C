#include <stdio.h>

//기본 입출력 함수(scanf, printf)
//scanf : 입력함수(입력시 &를 넣어줌), printf : 출력함수
//%lf : double 형 변수를 입력받을 때 사용
int main()
{
	double celsius;	//실수형
	//int celsius;
	
	printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램입니다. \n");
	printf("섭씨 온도를 입력해주세요. : ");
	scanf("%lf", &celsius);		//실수(%lf) 입력
	//scanf("%d", &celsius);	//정수(%d) 입력
	
	printf("섭씨 %f 도는 화씨로 %f 도 입니다. \n", celsius, celsius * 9 / 5 + 32);	//실수(%f) 출력
	//printf("섭씨 %d 도는 화씨로 %d 도 입니다. \n", celsius, celsius * 9 / 5 + 32); //정수(%d) 출력
}