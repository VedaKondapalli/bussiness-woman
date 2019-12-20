#include<stdio.h>
int main()
{
	int i,n,s=53,s1=53;
	scanf("%d",&n);
	printf("%d %d",s,s1);
	for(i=1;i<=n;i++)
	{
		if(s-s1==0)
		{
			s=s-13;
			printf("%d",s);
			printf("%d",s);
			}
			return 0;
	}
}
