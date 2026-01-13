#include<iostream>
using namespace std;

int solve(int n,int k){
    int cnt=0;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            cnt++;
            if(cnt==k) return i;
            n/=i;
        }
    }
    if(n>1){
        cnt++;
        if(cnt==k) return n;
    }
    return -1;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        cout<<solve(n,k)<<'\n';
    }
}