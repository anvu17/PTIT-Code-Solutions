#include <stdio.h>
#include <string.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n[19]; scanf("%s",n);
        int ok = 1;
        for(int i = 0; i < strlen(n)-1; i++){
            if(n[i]>n[i+1]){
                ok = 0;
                break;
            }
        }
        if(ok) printf("YES\n"); else printf("NO\n");
    }
}