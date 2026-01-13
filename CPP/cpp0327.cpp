#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int r=0;
        for(int i=0;i<s.size();i++){
            r=(r*2+(s[i]-'0'))%5;
        }
        cout<<(r==0?"Yes":"No")<<'\n';
    }
}