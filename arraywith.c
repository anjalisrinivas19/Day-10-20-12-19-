/*array*/
#include<stdio.h>
int main()
{
	int a[10]={10,20,30,40,50,60,70,80,90,100},i;
	printf("\n array elements are:");
	for(i=0;i<10;i++)
	{
		if(i!=9)
		printf("%d ,",a[i]);
		else
		printf("%d",a[i]);
	
	}
}
