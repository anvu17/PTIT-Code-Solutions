#include<iostream>
#include<string>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        bool found[10]={},valid=1;
        if(s[0]=='0') valid=0;
        for(char c:s){
            if(c<'0'||c>'9'){
                valid=0;
                break;
            }
            found[c-'0']=1;
        }
        if(!valid){
            cout<<"INVALID\n";
            continue;
        }
        for(int i=0;i<10;i++) if(!found[i]){
            valid=0;
            break;
        }
        cout<<(valid?"YES":"NO")<<'\n';
    }
}