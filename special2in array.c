#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i,j,k;
	int count=0;
	
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			for(k=j+1;k<=9;k++)
			{
					if(a[i]+a[j]+a[k]==12)
			{
				count++;
				printf("the pairs are \n(%d,%d,%d)\n",a[i],a[j],a[k]);
			}
				
			}
		
		}
	}
	printf("total pair is %d",count);
}
