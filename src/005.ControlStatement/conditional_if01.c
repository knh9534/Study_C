#include <stdio.h>

//조건문 if 형태
int main()
{
	int i;
	printf("입력하고 싶은 숫자를 입력하세요! : ");
	scanf("%d", &i);	//입력값(%d)을 변수 i에 대입
	
	if(i == 7)	//i 값이 7인 경우 
	{
		printf("입력값 : 7 이 확인되었습니다. \n");
	}

	
	return 0;
}