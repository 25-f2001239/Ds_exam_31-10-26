#include <stdio.h>
#include <string.h>
int main()  {
    char s[500], p[100];
    scanf("%499s%99s", s, p);
    char*q=s;
    int found=0;
    while((q=strstr(q, p)))  {
        printf("%ld ", (long)(q-s)+1);
        q++;
        found=1;
    }
    if(!found)puts("Not found");
}
