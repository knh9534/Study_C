#include <stdio.h>

//break
int main()
{
	int usranswer;
	
	printf("컴퓨터가 생각한 숫자를 맞추어 보세요 \n");
	
	for(;;) //무한반복
	{
		scanf("%d", &usranswer);
		
		if(usranswer == 3)
		{
			printf("정답입니다. \n");	//입력값이 3인 경우 출력
			break;						//break 반복문 종료
		}
		else
		{
			printf("오답입니다. \n");	//입력값이 3이 아닌경우 출력 후 다시 실행
		}
	}
	return 0;
}