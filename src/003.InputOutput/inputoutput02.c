#include <stdio.h>

//변수 형식에 따른 scanf 및 printf 사용방법
int main()
{
	//문자형 변수 선언
	char ch;
	
	//정수형 변수 선언
	short sh;
	int i;
	long lo;
	
	//실수형 변수 선언
	float fl;
	double du;
	
	//문자형 변수 입력(char = %c)
	printf("char 형 변수 입력 : ");
	scanf("%c", &ch);
	
	//정수형 변수 입력(short = %hd, int = %d, long = %ld)
	printf("short 형 변수 입력 : ");
	scanf("%hd", &sh);	
	printf("int 형 변수 입력 : ");
	scanf("%d", &i);	
	printf("long 형 변수 입력 : ");
	scanf("%ld", &lo);
	
	//실수형 변수 입력(float = %f, double = %lf)
	printf("float 형 변수 입력 : ");
	scanf("%f", &fl);
	printf("double 형 변수 입력 : ");
	scanf("%lf", &du);
	
	//변수 출력
	printf("char : %c, short : %d, int : %d \n", ch, sh, i);
	printf("long : %ld, float : %f, double : %f \n", lo, fl, du);
	
	return 0;	
}