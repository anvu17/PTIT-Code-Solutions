#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; long long k,s=0; cin>>n>>k;
        // Brute force:
        for(int i=1;i<=n;i++) s+=i%k;
        cout<<(s==k)<<'\n';
    }
}