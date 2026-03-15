#include<stdio.h>
int main() 
{
	int n,last,rest,result;
	printf("Enter a number: ");
	scanf("%d",&n);
	last=n%10;
	rest=n/10;
	result=last*1000+rest;
	printf("Result=%d",result);
	return 0;
}
