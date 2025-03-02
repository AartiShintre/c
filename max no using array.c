#include<stdio.h>
int main()
{
	int arr[5]={6,2,3,4,5};
	int i;
	int max=arr[0];
	for(i=0;i<=4;i++)
	{
		if(max<=arr[i])
		{
			max=arr[i];
		}
	}
	printf("max no is %d",max);
}
