#include<stdio.h>
int main()
{
	int i,n,j,res,s=10,s1=80;
	scanf("%d",n);
	printf("%d",s1);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			s=s+5;
			printf("%d",s);
		}
		else
		s1=s1-10;
		printf("%d",s1);
		}
		return 0;
	}
	

