#include <stdio.h>

//if else elsif
int main()
{
	int num;
	
	printf("아무 숫자나 입력해 보세요 : ");
	scanf("%d", &num);
	
	if(num == 7)
	{
		printf("행운의 숫자 7 이군요 \n");
	}
	else if(num == 4)
	{
		printf("죽음의 숫자 4 인가요 ;;; \n");
	}
	else
	{
		printf("그냥 평범한 숫자 %d \n", num);
	}
	
	return 0;
}