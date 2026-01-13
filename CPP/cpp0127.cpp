#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++) if(n%i==0) return 0;
    return 1;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        bool f=0;
        for(int i=2;i<=n/2;i++){
            if(isPrime(i)&&isPrime(n-i)){
                cout<<i<<' '<<n-i<<'\n';
                f=1;
                break;
            }            
        }
        if(!f) cout<<-1<<'\n';
    }
}