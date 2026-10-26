#include <stdio.h>
#include <ctype.h>
int main()  {
    char s[500];
    int v=0, c=0;
    fgets(s, sizeof s, stdin);
    for(int i=0;s[i];i++)if(isalpha((unsigned char)s[i]))  {
        char x=tolower((unsigned char)s[i]);
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')v++;
        else c++;
    }
    printf("Vowels %d, consonants %d\n", v, c);
}
