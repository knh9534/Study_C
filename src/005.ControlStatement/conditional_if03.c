#include <stdio.h>

//if(합격, 불합격)
int main()
{
	int score;
	
	printf("당신의 수학점수를 입력하세요 : ");
	scanf("%d", &score);
	
	if(score >= 90)
	{
		printf("당신은 합격입니다. \n");
	}
	if(score < 90)
	{
		printf("당신은 불합격입니다. \n");
	}
	
	return 0;
}