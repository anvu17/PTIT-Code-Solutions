#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,q,x,cnt=0; cin>>n>>q;
        while(n--){
            cin>>x;
            if(x==q) cnt++;
        }
        if(cnt) cout<<cnt<<'\n';
        else cout<<-1<<'\n';
    }
}