#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	float  c,fh;
 	printf("enter the temperature in celcius\n");
 	scanf("%f",&c);
 	fh = (c*1.8 )+32;
 	printf("temperature in fahrenheit is %f\n",fh);
	return 0;
}
