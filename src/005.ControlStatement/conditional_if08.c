#include <stdio.h>

//if 평균 계산 후 출력
int main()
{
	float avg_score;
	float korean, english, math, science;
	
	printf("국어, 영어, 수학, 과학 점수를 각각 입력해 주세요.(입력후 엔터) \n");
	scanf("%f %f %f %f", &korean, &english, &math, &science);
	
	avg_score = (korean+english+math+science)/4;
	printf("당신의 평균 점수는 %f 입니다. \n",avg_score);
	
	if(avg_score >=90)
	{
		printf("당신은 우등생 입니다. \n");
	}
	else if(avg_score >= 40)
	{
		printf("조금만 더 노력하세요 \n");
	}
	else
	{
		printf("많이 노력해야겠네요. \n");
	}
	
	return 0;
}