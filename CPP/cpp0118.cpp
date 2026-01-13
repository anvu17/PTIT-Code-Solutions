#include<iostream>
using namespace std;

bool isSphenicNum(int n){
    int cnt=0;
    for(int i=2;i*i<=n&&cnt<=3;i++){
        if(n%i==0){
            if(n%(i*i)==0) return 0;
            cnt++;
            n/=i;
        }
    }
    if(n>1) cnt++;
    return cnt==3;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<isSphenicNum(n)<<'\n';
    }
}