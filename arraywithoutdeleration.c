#include<stdio.h>
int main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);
	int a[50];
	int i;
	printf("enter element of array");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("element of array is ");
		for(i=0;i<=n-1;i++)
	{
		printf("%d\n",a[i]);
	}
}
