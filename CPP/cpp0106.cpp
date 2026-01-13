#include <iostream>
using namespace std;

bool isPalindrome(string s){
    int l=0,r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r]) return 0;
        l++; r--;
    }
    return 1;
}

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        cout<<(isPalindrome(s) ? "YES" : "NO")<<'\n';
    }
}