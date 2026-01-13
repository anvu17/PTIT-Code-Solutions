#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string str; cin>>str;
        string l; int s=0;
        for(char c:str){
            if(c>='A'&&c<='Z') l+=c;
            else if(c>='0'&&c<='9') s+=c-'0';
        }
        sort(l.begin(),l.end());
        cout<<l<<s<<'\n';
    }
}