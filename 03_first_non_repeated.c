#include <stdio.h>
int main()  {
    int a[100], n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)scanf("%d", &a[i]);
    for(int i=0;i<n;i++)  {
        int c=0;
        for(int j=0;j<n;j++)c+=a[i]==a[j];
        if(c==1)  {
            printf("%d\n", a[i]);
            return 0;
        }
    }
    puts("None");
}
