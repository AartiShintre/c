#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three no a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("a is greter %d\n",a);
	}
	 if(b>c && b>a);
	{
		printf("b is greter %d\n",b);
	}
	if (c>a && c>b);
	{
		printf("c is greter %d\n",c);
	}
}
