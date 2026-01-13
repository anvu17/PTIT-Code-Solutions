#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,x,ans=0; cin>>n;
        while(n--){
            cin>>x;
            if(x>ans) ans=x;
        }
        cout<<ans<<'\n';
    }
}