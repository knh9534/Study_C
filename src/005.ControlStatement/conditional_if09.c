#include <stdio.h>

//if( && 연산자(AND), || 연산자(or))
int main()
{
	int a;
	int height, weight;
	printf("아무 숫자나 입력하세요 : ");
	scanf("%d", &a);
	printf("당신의 키와 몸무게를 각각 입력해 주세요(입력후 엔터) \n");
	scanf("%d %d", &height, &weight);
	
	if(a >= 10 && a < 20)
	{
		printf("%d 는 10 이상, 20 미만인 수 입니다. \n",a);
	}
	if(height >= 190 || weight >= 100)
	{
		printf("당신은 '거구' 입니다. \n");
	}
		
	return 0;
}