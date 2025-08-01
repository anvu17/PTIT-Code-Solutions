#include <stdio.h>

int isPalindrome(int *a, int n){
    int l = 0, r = n - 1;
    while(l<r){
        if(a[l]!=a[r]) return 0;
        l++; r--;
    }
    return 1;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n); int a[n];
        for(int i = 0; i < n; i++) scanf("%d",&a[i]);
        printf(isPalindrome(a,n) ? "YES\n" : "NO\n");
    }
}