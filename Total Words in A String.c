// Write a program in C to count the total number of words in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int count = 0, i;

    printf("Input the string : ");
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;
    }
    printf("Total number of words in the string is : %d", count+1);
    return 0;
}
