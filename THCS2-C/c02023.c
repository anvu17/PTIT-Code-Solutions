#include <stdio.h>

int main(){
    int r,c; scanf("%d %d",&r,&c);
    int lim = r < c ? r : c;
    for(int i = 0; i < lim; i++){
        char ch = 'a' + r - 1;
        for(int j = 0; j < c; j++){
            if(j <= i) printf("%c",ch--);
            else printf("%c",ch+1);
        }
        printf("\n");
    }   
    for(int i = lim; i < r; i++){
        char ch = 'a' + r - 1;
        for(int j = 0; j < c; j++) printf("%c",ch--);
        printf("\n");
    }
}