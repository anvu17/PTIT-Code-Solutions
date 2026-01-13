#include <iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        bool ok=1;
        for(char c:s){
            if(c!='0' && c!='6' && c!='8'){
                ok=0;
                break;
            }
        }
        cout<<(ok ? "YES" : "NO")<<'\n';
    }
}