#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    for(int i = 0; i < n; i++){
        int c = 1; // phần tử đầu tiên của mỗi dòng là 1: C(i,0) = 1
        for(int k = 0; k <= i; k++){
            printf("%d ",c); // C(i,k)
            c = c*(i-k)/(k+1); // xem assets/c3028a.jpg
        }
        printf("\n");
    }
}
