#include <stdio.h>
int main()  {
    int a[100], n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j])  {
        printf("%d\n", a[i]);
        return 0;
    }
}
    }
    puts("None");
}
