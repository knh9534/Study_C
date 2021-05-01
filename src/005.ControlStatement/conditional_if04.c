#include <stdio.h>

//if 비교연산자
int main()
{
	int i, j;
	
	printf("크기 비교용 변수 첫번째 : ");
	scanf("%d", &i);
	printf("크기 비교용 변수 두번째 : ");
	scanf("%d", &j);
	
	if(i > j)
	{
		printf("%d 는/은 %d 보다 크다. \n", i, j);
	}
	if(i < j)
	{
		printf("%d 는/은 %d 보다 작다. \n", i, j);
	}
	if(i >= j)
	{
		printf("%d 는/은 %d 보다 크거나 같다. \n", i, j);
	}
	if(i <= j)
	{
		printf("%d 는/은 %d 보다 작거나 같다. \n", i, j);
	}
	if(i == j)
	{
		printf("%d 는/은 %d 와 같다. \n", i, j);
	}
	if(i != j)
	{
		printf("%d 는/은 %d 와 다르다. \n", i, j);
	}
	
	return 0;
}