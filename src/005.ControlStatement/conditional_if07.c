#include <stdio.h>

//if 와 else if 차이
int main()
{
	int num;
	
	printf("아무 숫자나 입력해 보세요 : ");
	scanf("%d", &num);
	
	if (num == 7)
	{
		printf("a 행운의 숫자 7 입니다. \n");
	}
	else if(num == 7)
	{
		printf("b 행운의 숫자 7 입니다. \n");
	}
	if (num == 7)
	{
		printf("c 행운의 숫자 7 입니다. \n");
	}
	if (num == 7)
	{
		printf("d 행운의 숫자 7 입니다. \n");
	}
	
	return 0;
}