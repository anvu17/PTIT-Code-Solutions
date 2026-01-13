#include<iostream>
#include<fstream>
using namespace std;

bool check(string s){
    int i=0; if(s[0]=='-') i=1;
    int l=s.size();
    if(i==l) return 0;
    for(;i<l;i++) if(!isdigit(s[i])) return 0;
    if(l>11) return 0;
    return 1;
}

int main(){
    ifstream in("DATA.in");
    string str; long long s=0;
    while(in>>str){
        if(check(str)) s+=stoll(str);
    }
    cout<<s;
}