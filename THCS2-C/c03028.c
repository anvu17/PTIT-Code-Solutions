#include <stdio.h>

int c(int n, int k){
    if(k == 0 || k == n) return 1;
    return c(n - 1, k - 1) + c(n - 1, k);
}

int main(){
    int n; scanf("%d",&n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++) printf("%d ",c(i,j));
        printf("\n");
    }
}