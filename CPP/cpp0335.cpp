#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int tmp=0,ans=0;
        for(char c:s){
            if(c>='0'&&c<='9') tmp=tmp*10+(c-'0');
            else{
                if(tmp>ans) ans=tmp;
                tmp=0;
            }
        }
        if(tmp>ans) ans=tmp;
        cout<<ans<<'\n';
    }
}