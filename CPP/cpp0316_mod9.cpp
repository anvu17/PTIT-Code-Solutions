#include<iostream>
using namespace std;

bool smm(string n){
    if(n=="0") return 0;
    int mod=0;
    for(char c:n) mod=(mod+(c-'0'))%9;
    return mod==0;
}

int main(){
    int t; cin>>t;
    while(t--){
        string n; cin>>n;
        cout<<smm(n)<<'\n';
    }
}