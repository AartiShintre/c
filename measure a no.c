#include<stdio.h>
int main()
{
	int a[5]={1,2,34,6,4};
	int n,i,count=0;
	printf("enter a no");
	scanf("%d",&n);
	for(i=0;i<=4;i++)
	{
		if(a[i]>n)
		{
			count++;
		}
	}
	printf("%d",count);
}
