// Write a program in C to Find the Frequency of Characters.

#include <stdio.h>
int main() {
    char str[100], ch;
    int count = 0;

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to find frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }

    printf("The frequency of '%c' is : %d", ch, count);
    return 0;
}
