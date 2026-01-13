#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,q; cin>>n>>q;
        int a[n+1],p[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
            p[i]=p[i-1]+a[i];
        }
        while(q--){
            int l,r; cin>>l>>r;
            cout<<p[r]-p[l-1]<<'\n';
        }
    }
}