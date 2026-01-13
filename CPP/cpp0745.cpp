#include<iostream>
using namespace std;

const int mod=1e9+7;
long long f[1001];

int main(){
    f[0]=0; f[1]=1;
    for(int i=2;i<=1000;i++) f[i]=(f[i-1]+f[i-2])%mod;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<f[n]<<'\n';
    }
}