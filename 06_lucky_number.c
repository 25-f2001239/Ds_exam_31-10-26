#include <stdio.h>
int main()  {
    int a[1000], n;
    scanf("%d", &n);
    if(n<1||n>1000)return 1;
    for(int i=0;i<n;i++)a[i]=i+1;
    int size=n;
    while(size>1)  {
        int step=a[1], m=0;
        if(step>size)break;
        for(int i=0;i<size;i++)if((i+1)%step)a[m++]=a[i];
        size=m;
    }
    int yes=0;
    for(int i=0;i<size;i++)yes|=a[i]==n;
    printf("%s\n", yes?"Lucky":"Not lucky");
}
