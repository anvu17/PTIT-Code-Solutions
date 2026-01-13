#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main(){
    int t; cin>>t; cin.ignore();
    while(t--){
        string s; getline(cin,s);
        string w; vector<string> v;
        stringstream ss(s);
        while(ss>>w) v.push_back(w);
        for(int i=v.size()-1;i>=0;i--)
            cout<<v[i]<<(i?' ':'\n');
    }
}