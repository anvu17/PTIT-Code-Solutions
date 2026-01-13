#include<iostream>
#include<string>
#include<cctype>
using namespace std;

char convert(char c){
    c=tolower(c);
    if(c<='c') return '2';
    if(c<='f') return '3';
    if(c<='i') return '4';
    if(c<='l') return '5';
    if(c<='o') return '6';
    if(c<='s') return '7';
    if(c<='v') return '8';
    return '9';
}

int main(){
    int t; cin>>t;
    while(t--){
        string s,n; cin>>s;
        for(char c:s) n+=convert(c);
        cout<<(n==string(n.rbegin(),n.rend())?"YES":"NO")<<'\n';
    }
}