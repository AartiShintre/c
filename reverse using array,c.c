#include<stdio.h>
int main()
{
	int arr[5];
int i;
for(i=0;i<=4;i++)
{
	printf("enter element");
	scanf("%d",&arr[i]);
	
	
}
printf("reverse no is ");
for(i=4;i>=0;i--)
{
	printf("%d\n",arr[i]);
}


}
