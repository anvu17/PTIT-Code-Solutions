#include <stdio.h>
#include <string.h>

int main(){
    int n;
    while(scanf("%d",&n)&&n){
        char s1[205],s2[205],t[405],m[405];
        scanf("%s %s %s",s1,s2,t);
        for(int d = 1; d <= 2*n; d++){
            int k=0;
            for(int i = 0; i < n; i++){
                m[k++] = s2[i];
                m[k++] = s1[i];
            }
            m[2*n]='\0';
            if(!strcmp(m,t)){
                printf("%d\n",d);
                goto ok;
            }
            strncpy(s1,m,n); s1[n]='\0';
            strcpy(s2,m+n);
        }
        printf("-1\n");
        ok:;
    }
}