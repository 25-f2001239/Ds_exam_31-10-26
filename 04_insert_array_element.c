#include <stdio.h>
int main()  {
    int a[101], n, x, p;
    scanf("%d", &n);
    for(int i=0;i<n;i++)scanf("%d", &a[i]);
    scanf("%d%d", &x, &p);
    if(p<1||p>n+1)return 1;
    for(int i=n;i>=p;i--)a[i]=a[i-1];
    a[p-1]=x;
    for(int i=0;i<=n;i++)printf("%d ", a[i]);
}
