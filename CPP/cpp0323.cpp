#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string n; long long m; cin>>n>>m;
        long long ans=0;
        for(char c:n)
            ans=(ans*10+(c-'0'))%m;
        cout<<ans<<'\n';
    }
}