#include <stdio.h>
long long f(long long n, long long k)  {
    return n==1?0:(f(n-1, k)+k)%n;
}
int main()  {
    long long n, k;
    scanf("%lld%lld", &n, &k);
    if(n>0&&k>0)printf("%lld\n", f(n, k)+1);
}
