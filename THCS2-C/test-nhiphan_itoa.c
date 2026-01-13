#include <stdio.h>
#include <stdlib.h>

int main(){
    int a; scanf("%d",&a);
    char b[11];
    itoa(a,b,2); // hàm không chuẩn (non-standard library function)
    printf("%s",b);
}