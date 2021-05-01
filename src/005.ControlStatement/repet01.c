#include <stdio.h>

//for 반복문(i ~ tonum까지의 합계)
int main()
{
	int i, tonum = 20, sum = 0;	//변수 선언 및 초기화
	
	for(i = 1; i <= tonum; ++i)	// i <= tonum이 될때까지 반복
	{
		//sum = sum + i; 와 같은 뜻
		sum +=i;
	}
	printf("1 부터 %d 까지의 합 : %d \n", tonum, sum);
	
	return 0;
}