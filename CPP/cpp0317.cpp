#include<iostream>
#include<string>
using namespace std;

bool check(string s){
    int l=0,r=s.size()-1;
    while(l<=r){
        if(s[l]!=s[r]) return 0;
        if((s[l]-'0')%2) return 0;
        l++; r--;
    }
    return 1;
}

int main(){
    int t; cin>>t;
    while(t--){
        string n; cin>>n;
        cout<<(check(n)?"YES":"NO")<<'\n';
    }
}