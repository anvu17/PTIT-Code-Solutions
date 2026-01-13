#include<iostream>
#include<fstream>
#include<set>
#include<cctype>
using namespace std;

int main(){
    ifstream in("VANBAN.in");
    set<string>w;
    string s;
    while(in>>s){
        for(char&c:s) c=tolower(c);
        w.insert(s);
    }
    for(auto x:w) cout<<x<<'\n';
}