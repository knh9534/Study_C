#include <stdio.h>

//구구단(중첩 for문)
int main()
{
	int i, j;
	
	for(i = 2; i < 10; i++)	//2 ~ 9단 까지 반복
	{
		for(j = 1; j < 10; j++)	//2X1 = 2 ~ 9X9= 81 까지 반복
		{
			printf("%d X %d = %d \n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}