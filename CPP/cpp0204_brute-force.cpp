#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++) if(n%i==0) return 0;
    return 1;
}

int main(){
    int t; cin>>t;
    while(t--){
        int cnt=0,l,r; cin>>l>>r;
        for(int i=l;i<=r;i++) if(isPrime(i)) cnt++;
        cout<<cnt<<'\n';
    }
}