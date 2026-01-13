#include <stdio.h>
#include <string.h>

int main(){
    int mark[10] = {0};
    char n[19]; scanf("%s",n);
    for(int i = 0; i < strlen(n); i++){
        if(n[i] == '2' || n[i] == '3'|| n[i] == '5' || n[i] == '7'){
            mark[n[i] - '0']++;
        }
    }
    for(int i = 0; i < 10; i++){
        if(mark[i]) printf("%d %d\n",i,mark[i]);
    }
}