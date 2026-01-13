#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,zcnt=0; cin>>n;
        long long x;
        while(n--){
            cin>>x;
            if(x) cout<<x<<' ';
            else zcnt++;
        }
        while(zcnt--) cout<<0<<' ';
        cout<<'\n';
    }
}