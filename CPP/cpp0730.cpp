#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long x,s=0,max=-1e18;
        while(n--){
            cin>>x;
            s+=x;
            if(s>max) max=s;
            if(s<0) s=0;
        }
        cout<<max<<'\n';
    }
}