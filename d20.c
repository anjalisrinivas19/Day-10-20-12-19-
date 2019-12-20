#include<stdio.h>
int main()
{
	int n,r,i,temp,fact,sum=0;
	printf("enter the n value");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		fact=1;
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
	printf("the number is strong number:");
	else
	printf("the number is not strong number:");
}
