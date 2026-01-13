#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,x,p=-1; cin>>n>>x;
        for(int i=1;i<=n;i++){
            int v; cin>>v;
            if(v==x&&p==-1) p=i;
        }
        cout<<p<<'\n';
    }
}