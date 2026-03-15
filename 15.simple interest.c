#include<stdio.h>
int main()
{
	float p,t,r;
	char s;
	scanf("%f%f %c",&p,&t,&s);
	if(s=='y')
	r=12;
	else
	r=10;
	printf("Interest=%.Of",(p*r*t)/100);
}
