#include <stdio.h>
#include <string.h>

int main(){
    char s[102]; fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")] = 0;

    char todel[102]; scanf("%s",todel);

    char *tok = strtok(s," ");
    while(tok!=NULL){
        if(strcmp(tok, todel)) printf("%s ",tok);
        tok = strtok(NULL," ");
    }
}