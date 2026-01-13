#include<iostream>
#include<string>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int l=s.size(),cnt=1;
        for(int i=1;i<=l;i++){
            if(i<l&&s[i]==s[i-1]) cnt++;
            else{
                cout<<s[i-1]<<cnt;
                cnt=1;
            }
        }
        cout<<'\n';
    }
}