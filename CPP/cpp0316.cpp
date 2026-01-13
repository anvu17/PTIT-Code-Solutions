#include<iostream>
using namespace std;

bool smm(string s){
    while(s.size()>1){
        int sum=0;
        for(char c:s) sum+=c-'0';
        if(sum==9) return 1;
        if(sum<9) return 0;
        s=to_string(sum);
    }
    return s[0]=='9';
}

int main(){
    int t; cin>>t;
    while(t--){
        string n; cin>>n;
        cout<<smm(n)<<'\n';
    }
}