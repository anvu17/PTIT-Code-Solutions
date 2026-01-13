#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        vector<int> cnt(256,0);
        for(char c:s) cnt[c]++;
        for(char c:s) if(cnt[c]==1) cout<<c;
        cout<<'\n';
    }
}