#include<cstdio>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int x[n],y[n];
        double a=0;
        for(int i=0;i<n;i++) scanf("%d%d",&x[i],&y[i]);
        for(int i=0;i<n;i++){
            int j=(i+1)%n;
            a+=x[i]*y[j]-x[j]*y[i];
        }
        printf("%.3f\n",a/2.0);
    }
}