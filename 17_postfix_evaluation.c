#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()  {
    char s[500];
    int a[100], t=-1, x, y;
    fgets(s, sizeof s, stdin);
    for(char*p=strtok(s, " \t\n");p;p=strtok(NULL, " \t\n"))  {
        char*e;
        long z=strtol(p, &e, 10);
        if(*p&&!*e)a[++t]=(int)z;
        else if(strlen(p)==1&&strchr("+-*/", p[0])&&t>0)  {
            y=a[t--];
            x=a[t--];
            switch(*p)  {
                case '+':a[++t]=x+y;
                break;
                case '-':a[++t]=x-y;
                break;
                case '*':a[++t]=x*y;
                break;
                case '/':if(!y)return 1;
                a[++t]=x/y;
            }
        } else return 1;
    }
    if(t==0)printf("%d\n", a[0]);
    else puts("Invalid");
}
