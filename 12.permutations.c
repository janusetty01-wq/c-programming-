#include<stdio.h>
int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	a=n/100;
	b=(n/10)%10;
	c=n%10;
	printf("%d%d%d\n%d%d%d\n%d%d%d\n%d%d%d\n%d%d%d\n%d%d%d"
	,a,b,c,a,c,b,b,a,c,b,c,a,c,a,b,c,b,a);
}
