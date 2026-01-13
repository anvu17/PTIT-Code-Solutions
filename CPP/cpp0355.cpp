#include<bits/stdc++.h>
using namespace std;

string norm(string s){
    for(char&c:s) c=tolower(c);
    stringstream ss(s);
    string w,res="";
    while(ss>>w){
        if(!res.empty()) res+=' ';
        res+=w;
    }
    for(char&c:res){
        if(isalpha(c)){
            c=toupper(c);
            break;
        }
    }
    return res;
}

int main(){
    string l,txt="";
    while(getline(cin,l)){
        txt+=l;
        txt+=' ';
    }
    string cur="";
    for(char c:txt){
        if(c=='.'||c=='?'||c=='!'){
            string out=norm(cur);
            if(!out.empty()) cout<<out<<'\n';
            cur="";
        }else{
            cur+=c;
        }
    }
}