#include<iostream>
#include<string>
using namespace std;

int main(){
    int t; cin>>t; cin.ignore();
    while(t--){
        string s; getline(cin,s);
        int cnt=0,st=0;
        for(char c:s){
            if(c==' '||c=='\t'||c=='\n') st=0;
            else{
                if(!st){
                    cnt++;
                    st=1;
                }
            }
        }
        cout<<cnt<<'\n';
    }
}