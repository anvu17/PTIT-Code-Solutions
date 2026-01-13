#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,q; cin>>n>>q; int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int cnt=upper_bound(a,a+n,q)-lower_bound(a,a+n,q);
        if(cnt) cout<<cnt<<'\n';
        else cout<<-1<<'\n';
    }
}