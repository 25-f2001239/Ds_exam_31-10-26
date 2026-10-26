#include <stdio.h>
#include <string.h>
int main()  {
    char s[500];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")]=0;
    printf("%zu\n", strlen(s));
}
