#include <stdio.h>
#include <string.h>

#define RANGE 1000000

int prime[RANGE + 1];

void sieve(){
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;
    for(int i = 2; i * i <= RANGE; i++){
        if(prime[i]){
            for(int j = i * i; j <= RANGE; j += i) prime[j] = 0;
        }
    }
}

int main(){
    int t; scanf("%d",&t);
    sieve();
    while(t--){
        long long l,r; scanf("%lld %lld",&l,&r);
        int cnt = 0;
        for(long long i = 2; i * i <= r; i++){
            if(prime[i]){
                long long sq = (long long) i * i;
                if(sq >= l && sq <= r) cnt++;
            }
        }
        printf("%d\n",cnt);
    }
}