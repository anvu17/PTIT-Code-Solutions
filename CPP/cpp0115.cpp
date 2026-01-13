#include<iostream>
using namespace std;

void pf(int n){
    for(int i=2;i*i<=n;i++){
        int cnt=0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        if(cnt>0) cout<<i<<' '<<cnt<<'\n';
    }
    if(n>1) cout<<n<<" 1";
    cout<<'\n';
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        pf(n);
    }
}