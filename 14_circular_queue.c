#include <stdio.h>
int main()  {
    int q[5], f=-1, r=-1, c, x;
    do  {
        scanf("%d", &c);
        if(c==1)  {
            if((r+1)%5!=f)  {
                scanf("%d", &x);
                if(f<0)f=0;
                r=(r+1)%5;
                q[r]=x;
            } else puts("Full");
        } else if(c==2)  {
            if(f<0)puts("Empty");
            else  {
                printf("%d\n", q[f]);
                if(f==r)f=r=-1;
                else f=(f+1)%5;
            }
        } else if(c==3&&f>=0)  {
            for(int i=f;;i=(i+1)%5)  {
                printf("%d ", q[i]);
                if(i==r)break;
            }
            puts("");
        }
    }
    while(c);
}
