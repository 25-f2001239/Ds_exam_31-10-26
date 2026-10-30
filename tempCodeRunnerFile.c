#include <stdio.h>
#include <string.h>
int main()  {
    char a[201], b[201];
    scanf("%200s%200s", a, b);
    if(strlen(a)+strlen(b)<sizeof a)strcat(a, b);
    puts(a);
}
