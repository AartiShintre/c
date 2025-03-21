#include<stdio.h>
int main()
{
	int i,n,sum,lastdigit;
	printf("enter a no");
	scanf("%d",&n);
	sum=0;
	while(n!=0){
		lastdigit=n%10;
		//sum=sum+lastdigit;
		n=n/10;
		if(lastdigit%2==0){
			sum=sum+lastdigit;
			
		}
		
		
		
	}
	printf("the sum of no is %d",sum);
}
