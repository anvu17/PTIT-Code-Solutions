#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b) printf("%d %d %d %.2lf %d",a+b,a-b,a*b,(float)a/b,a%b);
    else printf("0");  
}