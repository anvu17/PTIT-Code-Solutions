#include <stdio.h>

int main(){
    int h; scanf("%d",&h);
    for(int i = 1; i <= h; i++){
        for(int j = 0; j < i; j++){
            int v;
            if(i%2) v = 2*j+1;
            else v = 2*j+2;
            printf("%d",v);
        }
        printf("\n");
    }
}