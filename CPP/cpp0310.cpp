#include<iostream>
using namespace std;

long long rc(string s,char a,char b){
    for(char&c:s) if(c==a) c=b;
    return stoll(s);
}

int main(){
    int t; cin>>t;
    while(t--){
        string x1,x2; cin>>x1>>x2;
        cout<<rc(x1,'6','5')+rc(x2,'6','5')<<' '
        <<rc(x1,'5','6')+rc(x2,'5','6')<<'\n';
    }
}