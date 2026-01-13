#include <stdio.h>
#include <string.h>

int check(char *p){
/*
    2 8 H 1 - 9 9 9 . 9 9
i:  0 1 2 3 4 5 6 7 8 9 10
*/
    if(p[5] < p[6] && p[6] < p[7] && p[7] < p[9] && p[9] < p[10]) return 1;
    if(p[5] == p[6] && p[6] == p[7] && p[7] == p[9] && p[9] == p[10]) return 1;
    if(p[5] == p[6] && p[6] == p[7] && p[9] == p[10]) return 1;
    for(int i = 5; i <= 10; i++) if(i!=8 && p[i]!='6' && p[i]!='8') return 0;
    return 1;
}

int main(){
    int t; scanf("%d",&t); getchar();
    while(t--){
        char p[15]; scanf("%s",p);
        printf(check(p) ? "YES\n" : "NO\n");
    }
}