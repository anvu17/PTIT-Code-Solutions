#include <stdio.h>
#include <string.h>

char s[55][55];

int main(){
    int n;
    while(scanf("%d",&n)==1){
        for(int i = 0; i < n; i++) scanf("%s",s[i]);
        int len = strlen(s[0]);
        int best = 1e9;
        for(int shift = 0; shift < len; shift++){
            char target[55]="";
            strcpy(target,s[0]+shift);
            strncat(target,s[0],shift);
            int steps=0,f=0;
            for(int i = 0; i < n; i++){
                char doubleStr[110];
                strcpy(doubleStr,s[i]);
                strcat(doubleStr,s[i]);
                char *pos=strstr(doubleStr,target);
                if(!pos){
                    f=1;
                    break;
                }
                steps+=pos-doubleStr;
            }
            if(!f && steps<best) best=steps;
        }
        printf("%d\n",best==1e9?-1:best);
    }
}