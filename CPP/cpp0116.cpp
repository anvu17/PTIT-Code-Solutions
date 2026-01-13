#include<iostream>
using namespace std;

#define MAX 10000
int spf[MAX+1];

int main(){
    for(int i = 1; i <= MAX; i++) spf[i] = i;
    for(int i = 2; i*i <= MAX; i++){
        if(spf[i]==i){
            for(int j = i * i; j <= MAX; j += i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        for(int i = 1;i <= n; i++) cout<<spf[i]<<' ';
        cout<<'\n';
    }
}