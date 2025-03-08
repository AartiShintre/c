#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int i;
	for(i=0;i<=4;i++)
	{
		if(i%2!=0)
		{
			int b;
			b=a[i]*2;
			printf("value is %d\n",a);
		}
		else
		{
			int b;
			b=(i*10);
			printf("%d",b);
		}
	}
	for(i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	}

}
