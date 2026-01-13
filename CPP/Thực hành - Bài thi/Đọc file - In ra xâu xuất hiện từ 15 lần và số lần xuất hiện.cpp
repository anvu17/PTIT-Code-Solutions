#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("DATA.in","r",stdin);
    map<string,int>m;
    string s;
    while(getline(cin,s)){
        if(s!="") m[s]++;
    }
    for(auto x:m){
        if(x.second>14) cout<<x.first<<' '<<x.second<<endl;
    }
}