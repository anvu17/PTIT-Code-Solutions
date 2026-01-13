#include<iostream>
#include<sstream>
#include<set>
using namespace std;

int main(){
    int t; cin>>t; cin.ignore();
    while(t--){
        string s1,s2,w;
        getline(cin,s1);
        getline(cin,s2);

        set<string>a,b;

        stringstream ss1(s1);
        while(ss1>>w)a.insert(w);

        stringstream ss2(s2);
        while(ss2>>w)b.insert(w);

        for(string x:a)
            if(!b.count(x))cout<<x<<' ';
        cout<<'\n';
    }
}