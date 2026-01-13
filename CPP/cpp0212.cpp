#include<iostream>
using namespace std;

const long long m=1e9+7;

int main(){
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        long long r=0,a;
        for(int i=0;i<n;i++){
            cin>>a;
            r=(r*x+a)%m;
        }
        cout<<r<<'\n';
    }
}