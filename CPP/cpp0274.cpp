#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        unordered_map<int,int>f;
        int x,r=0;
        for(int i=0;i<n;i++){
            cin>>x;
            f[x]++;
        }
        for(auto &a:f){
            if(a.second>1) r+=a.second;
        }
        cout<<r<<'\n';
    }
}