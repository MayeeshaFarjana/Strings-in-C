// Write a program in C to input a string and print it.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Input the string : ");
    fgets(str, sizeof(str), stdin);
    printf("The string you entered is : %s", str);

    return 0;
}
