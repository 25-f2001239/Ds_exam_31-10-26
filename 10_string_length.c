#include <stdio.h>
#include <string.h>
int main()  {
    char s[500];
    printf("Enter the string   ");
    scanf("%s",&s);
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    printf("The length of str is %d",i);
}