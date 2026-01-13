#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,q; cin>>n>>q; int a[n];
        for(int &x:a) cin>>x;
        while(q--){
            int s=0,l,r; cin>>l>>r;
            for(int i=l-1;i<r;i++) s+=a[i];
            cout<<s<<'\n';
        } 
    }
}