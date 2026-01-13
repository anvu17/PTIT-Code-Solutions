#include <stdio.h>

typedef struct{
    long long num,den;
} frac;

long long gcd(long long a, long long b){
    while(b){
        long long r = a%b;
        a = b;
        b = r;
    }
    return a;
}

frac simplify(frac f){
    long long cd = gcd(f.num, f.den);
    f.num /= cd;
    f.den /= cd;
    return f;
}

int main(){
    frac f; scanf("%lld %lld",&f.num,&f.den);
    f = simplify(f);
    printf("%lld/%lld",f.num,f.den);
}