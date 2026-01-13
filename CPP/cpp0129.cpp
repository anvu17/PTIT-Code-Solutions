#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,p,x=0; cin>>n>>p;
        while(n/=p) x+=n;
        cout<<x<<'\n';
    }  
}