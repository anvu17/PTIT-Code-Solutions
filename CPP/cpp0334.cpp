#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        long long tmp=0,sum=0;
        for(char c:s){
            if(c>='0'&&c<='9') tmp=tmp*10+c-'0';
            else{
                sum+=tmp;
                tmp=0;
            }
        }
        cout<<sum+tmp<<'\n';
    }
}