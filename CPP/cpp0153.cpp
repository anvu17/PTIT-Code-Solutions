#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; long long k; cin>>n>>k;
        if(k>n) cout<<n*(n+1)/2<<'\n';
        else{
            long long q=n/k,r=n%k;
            cout<<q*k*(k-1)/2+r*(r+1)/2<<'\n';
        }
    }
}