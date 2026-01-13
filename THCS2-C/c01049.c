#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int o=0,e=0;
        while(n){
            if(n%10%2==0) e++;
            else o++;
            n=n/10;
        }
        printf("%d %d\n",o,e);
    }
}