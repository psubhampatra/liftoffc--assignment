#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a,b,sum,diff,mul,div,rem;
	printf("Enter two number \n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	diff=a-b;
	mul=a*b;
	div=a/b;
	rem=a%b;
	printf("addition is %d\n",sum);
	printf("substraction is %d\n",diff);
	printf("multiplicatin is %d\n",mul);
	printf("division is %d\n",div);
	printf("reminder is %d",rem);
	return 0;
}
