#include <stdio.h>
int fact(int n)  {
    return n<2?1:n*fact(n-1);
}
int main()  {
    int n, x, s=0;
    scanf("%d", &n);
    x=n;
    do  {
        s+=fact(x%10);
        x/=10;
    }
    while(x);
    printf("%s\n", s==n?"Strong":"Not strong");
}
