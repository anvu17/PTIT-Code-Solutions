#include <stdio.h>

int main(){
    int n; scanf("%d", &n);
    long long s = 0, t = 1;
    for(int i = 1; i <= n; i++){
        t*=i;
        s+=t;
    }
    printf("%lld",s);
}