#include <stdio.h>
#include <string.h>

char w[1000][100];
char cnt[1000];

int main(){
    char s[100];
    int n=0,maxLen=0;
    while(scanf("%s",s)==1){
        int len=strlen(s);
        if(len>maxLen) maxLen=len;
        int f=0;
        for(int i = 0; i < n; i++){
            if(strcmp(w[i],s)==0){
                cnt[i]++;
                f=1;
                break;
            }
        }
        if(!f){
            strcpy(w[n],s);
            cnt[n++]=1;
        }
    }
    for(int i = 0; i < n; i++){
        if(strlen(w[i])==maxLen)
            printf("%s %d %d\n",w[i],maxLen,cnt[i]);
    }
}