// Write a program in C to find maximum occurring character in a string.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[100];
	int ch[255];
    int i = 0, max;
    int a;
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);


    for(i=0; i<255; i++)  //Set frequency of all characters to 0
    {
        ch[i] = 0;
    }


    // Read for frequency of each characters
    i=0;
    while(str[i] != '\0')
    {
        a = (int)str[i];
        ch[a] += 1;
        i++;
    }

    max = 0;
    for(i=0; i<255; i++)
    {
        if(i!=32)
        {
        if(ch[i] > ch[max])
            max = i;
        }
    }
    printf("The Highest frequency of character '%c'\n", max);
    printf("appears number of times : %d\n", ch[max]);
}
