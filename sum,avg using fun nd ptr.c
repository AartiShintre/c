#include<stdio.h>
int work(int a,int b,int *sum, int *prod,int *avg);

int main()
{
	int a=5;
	int b=6;
int sum,prod,avg;
work(a,b,&sum,&prod,&avg);
printf("%d\n",sum);
printf("%d\n",prod);
printf("%d",avg);
	
}
int work(int a,int b,int *sum, int *prod,int *avg)
{
	*sum=a+b;
	*prod=a*b;
	*avg=(a+b)/2;

}
