// Write a program in C to check whether a character is digit or not.

#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch;
    printf("Input a character : ");
    scanf("%c", &ch);
	if( ch >= '0' && ch <= '9' )
		printf("The entered character is a digit.\n");
	else
		printf("The entered character is not a digit.\n" );
	return 0;
}
