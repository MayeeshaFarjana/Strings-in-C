// Write a program in C to convert a string to lowercase.


#include<stdio.h>
#include<string.h>
int main(){
   char str[1000];
   int i;
   printf("Input a string in UPPERCASE: ");
   fgets(str, sizeof(str), stdin);

   for(i=0;i<=strlen(str);i++){
      if(str[i]>=65 && str[i]<=90)
         str[i]=str[i]+32;
   }
   printf("\nHere is the above string in lowercase :\n%s",str);
   return 0;
}
