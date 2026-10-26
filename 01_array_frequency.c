#include <stdio.h>
int main()  {
    int a[100], n, done[100]={0 } ;
    scanf("%d", &n);
    for(int i=0;i<n;i++)scanf("%d", &a[i]);
    for(int i=0;i<n;i++)if(!done[i])  {
        int c=0;
        for(int j=i;j<n;j++)if(a[j]==a[i])  {
            c++;
            done[j]=1;
        }
        printf("%d: %d\n", a[i], c);
    }
    return 0;
}
