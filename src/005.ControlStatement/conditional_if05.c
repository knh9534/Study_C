#include <stdio.h>

//if else
int main()
{
	int num;
	
	printf("아무 숫자나 입력해 보세요 : ");
	scanf("%d", &num);
	
	if(num == 7)
	{
		printf("입력값은 7입니다. \n");
	}
	else
	{
		printf("입력값이 %d 입니다. 7을 입력하세요. \n", num);
	}
	
	return 0;
}