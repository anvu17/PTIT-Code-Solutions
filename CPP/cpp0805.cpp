#include<bits/stdc++.h>
using namespace std;

set<string> read(string f){
    ifstream in(f);
    set<string>s;
    string w;
    while(in>>w){
        for(char&c:w) c=tolower(c);
        s.insert(w);
    }
    return s;
}

int main(){
    set<string>s1=read("DATA1.in");
    set<string>s2=read("DATA2.in");
    vector<string>u,i;
    set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),back_inserter(u));
    set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),back_inserter(i));
    for(int j=0;j<u.size();j++) cout<<u[j]<<' ';
    cout<<'\n';
    for(int j=0;j<i.size();j++) cout<<i[j]<<' ';
}