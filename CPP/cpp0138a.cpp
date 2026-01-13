#include<iostream>
using namespace std;

bool p(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        for(int i=2;i<=n/2;i++){
            if(p(i)&&p(n-i)){
                cout<<i<<' '<<n-i<<' ';
                break;  
            }
        }
        cout<<'\n';
    }
}