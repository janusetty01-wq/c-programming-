#include<stdio.h>
int main()
{
	int m,n,i,j;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	for(j=1;j<=10;j++)
	printf("%d*%d=%d\n",i,j,i*j);
}
