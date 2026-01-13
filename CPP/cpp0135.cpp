#include<bits/stdc++.h>
using namespace std;

#define r 1000000
bool p[r+1];

void sieve(){
    memset(p,1,sizeof(p));
    p[0]=p[1]=0;
    for(int i=2;i*i<=r;i++){
        if(p[i]){
            for(int j=i*i;j<=r;j+=i) p[j]=0;
        }
    }
}

int main(){
    sieve();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int cnt=0;
        for(int i=2;i*i<=n;i++){
            if(p[i]){
                cout<<i*i<<' ';
            }
        }
        cout<<'\n';
    }
}