#include <stdio.h>
void oct(unsigned n)  {
    if(n>=8)oct(n/8);
    putchar('0'+n%8);
}
int main()  {
    unsigned n;
    scanf("%u", &n);
    oct(n);
    puts("");
}
