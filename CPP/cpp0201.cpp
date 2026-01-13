#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,ans=1e9; cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        sort(a,a+n);
        for(int i=0;i<n-1;i++) ans=min(ans,a[i+1]-a[i]);
        cout<<ans<<'\n';
    }
}