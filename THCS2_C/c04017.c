#include <stdio.h>

int isPrime(int n){
    if(n<2) return 0;
    for(int i = 2; i*i <= n; i++) if(n%i==0) return 0;
    return 1;
}

int main(){
    int n, cnt = 0; scanf("%d",&n); int a[n];
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);
    for(int i = 0; i < n; i++) if(isPrime(a[i])) cnt++;
    printf("%d ",cnt);
    for(int i = 0; i < n; i++) if(isPrime(a[i])) printf("%d ",a[i]);
}
