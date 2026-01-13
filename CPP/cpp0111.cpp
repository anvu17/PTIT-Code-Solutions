#include <iostream>
using namespace std;

bool check(string s){
    for(int i = 1; i < s.size(); i++){
        int d=s[i]-s[i-1];
        if(d!=1&&d!=-1) return 0;
    }
    return 1;
}

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        cout<<(check(s) ? "YES" : "NO")<<'\n';
    }
}