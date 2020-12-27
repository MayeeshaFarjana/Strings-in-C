// Write a program in C to print individual characters of string in reverse order without built in function.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int l,i;

    printf("Input the string : ");
    fgets(str, sizeof(str), stdin);
    l=strlen(str);
    printf("The characters of the string in reverse are : ");
    for(i=l;i>=0;i--)
        {
          printf("%c", str[i]);
          if(str[i]==' ') printf(" ");
        }
    printf("\n");
    return 0;
}
