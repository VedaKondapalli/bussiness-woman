#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x%3==0&&x%5==0)
	printf("FITTBIZZ");
	else if(x%3==0)
	printf("FIZZ");
	else if(x%5==0)
	printf("BIZZ");
	else
	printf("not divisible");
	return 0;
}
