#include<bits/stdc++.h>
using namespace std;

#define r 10000
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
        for(int i=2;i<=n;i++) if(p[i]) cout<<i<<' ';
        cout<<'\n';
    }
}