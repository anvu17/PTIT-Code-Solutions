#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int a,b; scanf("%d %d",&a,&b);
        while(a){
            int tmp = a;
            a = b % a;
            b = tmp;
        }
        printf("%d\n",b);
    }
}