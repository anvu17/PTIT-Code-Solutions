#include<iostream>
using namespace std;

void gen(int n,string s){
    if(s.size()==n){
        cout<<s<<' ';
        return;
    }
    gen(n,s+'0');
    gen(n,s+'1');
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        gen(n,"");
        cout<<'\n';
    }
}