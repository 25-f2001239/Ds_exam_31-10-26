#include <stdio.h>
#include <ctype.h>
int main()  {
    char s[500];
    int v=0, c=0;
    printf("Enter the string");
    scanf("%s",&s);
    int i=0;
    while(s[i]!='\0'){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')v++;
        else c++;
        i++;
    }
    printf("Vowels %d, consonants %d\n", v, c);
}
