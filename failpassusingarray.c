#include<stdio.h>
int  marks(arr[]);
int main()
{
	int arr[10]={75,90,68,98,45,34,23,22,79,80};
	
	marks(arr[]);
	
}
int marks(arr[])
{
	int i;
	for(i=0;i<=9;i++)
	{
		if(arr[i]<=35)
		{
			printf("%d ",i);
		}
	}
}
