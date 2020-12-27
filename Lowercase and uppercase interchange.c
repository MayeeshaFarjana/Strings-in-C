// Write a program in C to read a sentence and replace lowercase characters by uppercase and vice-versa

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int l,i;

    printf("Input the string : ");
    fgets(str, sizeof(str), stdin);

    l=strlen(str);

    printf("\nThe given sentence is : %s", str);

    printf("After Case changed the string  is : ");
    for(i=0; i < l; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] -32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
   printf("%s", str);
   printf("\n");
   return 0;
}
