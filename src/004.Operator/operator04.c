#include <stdio.h>

//연산자의 여러가지 사용 방법 
int main()
{
	int a = 1, b = 1, c = 1, d = 1;
	
	//덧셈 연산자
	a = a + 1;
	printf("a : %d \n", a);
	
	b += 1;	//b = b + 1 과 동일
	printf("b : %d \n", b);
	
	++c;	//1 증가 후 값 반환
	printf("c : %d \n", c);
	
	d++;	//값 반환 후 1 증가
	printf("d : %d \n", d);
	
	//뺄셈 연산자
	a = a - 1;
	printf("a : %d \n", a);
	
	b -= 1;	//b = b - 1 과 동일
	printf("b : %d \n", b);
	
	--c;	//1 감소 후 값 변환
	printf("c : %d \n", c);
	
	d--;	//값 반환 후 1 감소
	printf("d : %d \n", d);
	
	return 0;
}