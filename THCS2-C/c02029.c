#include <stdio.h>

int main(){
    int h; scanf("%d",&h);
    char c = 'A';
    for(int i = 1; i <= h; i++){
        char tmp = c;
        for(int j = 1; j <= i; j++){
            printf("%c ",tmp);
            tmp += h-j;
        }
        c++;
        printf("\n");
    }
}