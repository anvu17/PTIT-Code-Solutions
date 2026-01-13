#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        string r=s;
        reverse(r.begin(),r.end());
        cout<<(s==r?"YES":"NO")<<'\n';
    }
}