#include<iostream>
using namespace std;

long long mod(string a,long long m){
    long long ans=0;
    for(char c:a)
        ans=(ans*10+(c-'0'))%m;
    return ans;
}

long long powmod(long long a,long long b,long long m){
    long long ans=1;
    a%=m;
    while(b){
        if(b&1) ans=(ans*a)%m;
        a=(a*a)%m;
        b>>=1;
    }
    return ans;
}

int main(){
    int t; cin>>t;
    while(t--){
        string a; long long b,m; cin>>a>>b>>m;
        cout<<powmod(mod(a,m),b,m)<<'\n';
    }
}