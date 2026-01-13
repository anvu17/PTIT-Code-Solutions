#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long>r(n,-1);
        for(int i=0;i<n;i++){
            long long x; cin>>x;
            if(x>=0&&x<n) r[x]=x;
        }
        for(long long a:r) cout<<a<<' ';
        cout<<'\n';
    }
}