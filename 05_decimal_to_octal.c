#include <stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);   
    int a=n;
    int x=0;
    int r=0;
    int i=1;
    while(a>0){
        r=a%8;
        x=x+(r*i);
        a=a/8;
        i=i*10;
    }
    printf("%d",x);
}