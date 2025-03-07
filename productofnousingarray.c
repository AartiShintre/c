#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int i;
	int prod=1;
	for(i=0;i<=4;i++)
	{
		prod=(prod) * (arr[i]);
	}
	printf("%d",prod);
}
