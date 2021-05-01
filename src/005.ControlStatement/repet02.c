#include <stdio.h>

//for N개의 과목 점수
int main()
{
	int i , subject, score;
	double sum_score = 0;
	
	printf("몇 개의 과목 점수를 입력 받을 것인가요? : ");
	scanf("%d", &subject);	//입력 받을 과목 갯수 설정
	
	printf("\n 각 과목의 점수를 입력해 주세요 \n");
	
	for(i=1; i <=subject; i++)	// i <= subject 조건에 만족할 경우 반복
	{
		printf("과목 %d : ", i);	// i 값을 %d에 입력
		scanf("%d", &score);		//%d 값을 score변수에 대입
		sum_score = sum_score + score;	
		//sum_scored에 sum_score + score 값 대입
	}
	
	printf("전체 과목의 평균은 : %.2f \n", sum_score / subject);
	
	return 0;
}