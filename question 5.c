#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char ch;
	printf("enter any alphabet: ");
	scanf("%c", &ch);
	
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		 printf("vowel");
		 break;
	default: printf("consonant");	 	
	}
	
	return 0;
}
