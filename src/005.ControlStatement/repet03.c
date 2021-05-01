#include <stdio.h>

//1~15까지 차례로 출력하는 프로그램 작성(실습)
// 1 2 3 4 5 6  .... 15
int main()
{
	int i, max = 15;
	
	for(i=1; i <= max; ++i)
	{
		printf("%d ",i);
	}
	return 0;
}