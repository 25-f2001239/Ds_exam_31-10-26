#include <stdio.h>
int main()  {
    int s[5], q[5], top=-1, f=0, r=0, c, x;
    do  {
        scanf("%d", &c);
        if(c==1)  {
            scanf("%d", &x);
            if(top<4)s[++top]=x;
        } else if(c==2)  {
            if(top>=0)printf("%d\n", s[top--]);
            else puts("Empty");
        } else if(c==3)  {
            scanf("%d", &x);
            if(r<5)q[r++]=x;
        } else if(c==4)  {
            if(f<r)printf("%d\n", q[f++]);
            else puts("Empty");
        }
    }
    while(c);
}
