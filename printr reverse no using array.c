#include<stdio.h>
int main()
{
	int i;
	int a[5]={1,2,3,4,5};
	for(i=0;i<=4;i++)
	{
		printf("the index is %d\n",a[i]);
	}
		for(i=4;i>=0;i--)
	{
		printf("the reverse  index is %d\n",a[i]);
	}
}
