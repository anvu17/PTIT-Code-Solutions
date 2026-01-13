#include <stdio.h>

long long f[93];

long long fib(int n){
    if(f[n]) return f[n];
    if(n==1||n==2) return 1;
    return f[n]=fib(n-1)+fib(n-2);
}

int main(){
    int t,a,b; scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        for(int i = a; i <= b; i++) printf("%lld ",fib(i));
        printf("\n");
    }
}