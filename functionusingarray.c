#include<stdio.h>
int fun(int a[]);
int main()
{
	int a[2]={2,5};
	printf("befor swap %d %d\n",a[0],a[1]);
	fun(a);
	printf("after swap %d %d\n",a[0],a[1]);
	
}
int fun(int a[])
{
	int temp=0;
	temp=a[0];
	a[0]=a[1];
	a[1]=temp;
//	a[0]=5;
//	a[1]=2;
}
