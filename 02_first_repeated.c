#include <stdio.h>
int main()  {
    int a[100], n;
    printf("Enter no of elements of arraay");
    scanf("%d", &n);
    printf("Enter elements");
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
printf("None\n");
}
