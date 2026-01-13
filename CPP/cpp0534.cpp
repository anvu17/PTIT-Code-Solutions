#include<bits/stdc++.h>
using namespace std;

bool p(string s){
    if(s.size()<2) return 0;
    string r=s;
    reverse(r.begin(),r.end());
    return r==s;
}

bool cmp(string a,string b){
    if(a.size()!=b.size()) return a.size()>b.size();
    return a>b;
}

int main(){
    map<string,int>m;
    string s;
    while(cin>>s) if(p(s)) m[s]++;
    vector<string>v;
    for(auto&x:m) v.push_back(x.first);
    sort(v.begin(),v.end(),cmp);
    for(auto&x:v) cout<<x<<' '<<m[x]<<'\n';
}