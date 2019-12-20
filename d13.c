#include<stdio.h>
int main()
{
	int a,b,n,m;
	printf("enter the n value:");
	scanf("%d",&n);
	printf("enter the m terms:");
	scanf("%d",&m);
	for(a=1;a<=m;a++)
	{
		for(b=1;b<=m;b++)
		{
			printf("\n %d X %d=%d",a,b,a*b);
		}
         printf("\n\n"); 
	}
}
