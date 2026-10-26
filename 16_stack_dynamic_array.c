#include <stdio.h>
#include <stdlib.h>
int main()  {
    int*a=NULL, x, c;
    size_t n=0, cap=0;
    do  {
        scanf("%d", &c);
        if(c==1)  {
            scanf("%d", &x);
            if(n==cap)  {
                cap=cap?cap*2:2;
                a=realloc(a, cap*sizeof *a);
                if(!a)return 1;
            }
            a[n++]=x;
        } else if(c==2)  {
            if(n)printf("%d\n", a[--n]);
            else puts("Empty");
        } else if(c==3)  {
            for(size_t i=0;i<n;i++)printf("%d ", a[i]);
            puts("");
        }
    }
    while(c);
    free(a);
}
