#include<iostream>
using namespace std;
int pass(int *aa){
    *aa	=10;
}

int main()
{
	int a=5;
	pass(&a);
	cout<<a;
	
}
