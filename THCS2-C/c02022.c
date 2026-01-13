#include <stdio.h>

int main(){
    int h,tmp=1; scanf("%d",&h);
    for(int i = 1; i <= h; i++){
        if(i%2){
            for(int j = 0; j < i; j++) printf("%d ",tmp+j);
        }
        else{
            for(int j = i - 1; j >= 0; j--) printf("%d ",tmp+j);
        }
        printf("\n");
        tmp+=i;
    }
}