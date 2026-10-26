#include <stdio.h>
int main()  {
    int a[100], n;
    printf("Enter size of array");
    scanf("%d", &n);
    printf("Enter elements");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++)  {
        int c=0;
        for(int j=0;j<n;j++){
            if (a[i] == a[j]) {
                c++;
        }
    }
        if(c==1)  {
            printf("%d\n", a[i]);
            return 0;
        }
    }
    printf("None\n");
}
