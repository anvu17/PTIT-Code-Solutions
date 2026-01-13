#include<iostream>
#include<sstream>
using namespace std;

int main(){
    int t; cin>>t; cin.ignore();
    while(t--){
        string s; getline(cin,s);
        stringstream ss(s);
        int n=0,o=0,e=0,x;
        while(ss>>x){
            n++;
            if(x%2==0) e++;
            else o++;
        }
        cout<<((n%2==0&&e>o)||(n%2&&o>e)?"YES":"NO")<<'\n';
    }
}