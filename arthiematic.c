#include<stdio.h>
#include<math.h>
int main() 
{
int x,n,ch;
printf("Enter two numbers: ");
scanf("%d%d",&x,&n);
printf("1.Add 2.Sub 3.Mul 4.Div 5.Pow\n");
scanf("%d",&ch);
switch(ch)
{
	case 1:printf("Add=%d",x+n);break;
	case 2:printf("Sub=%d",x-n);break;
	case 3:printf("Mul=%d",x*n);break;
	case 4:printf("Div=%d",x/n);break;
	case 5:printf("Pow=%.Of",pow(x,n));break;
}
}
