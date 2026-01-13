#include<iostream>
#include<algorithm>
using namespace std;

const int m=10000;
bool p[m+1];

int main(){
    fill(p,p+m+1,true);
    p[0]=p[1]=0;
    for(int i=2;i*i<=m;i++){
        if(p[i]){
            for(int j=i*i;j<=m;j+=i) p[j]=0;
        }
    }
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        for(int i=2;i<=n/2;i++){
            if(p[i]&&p[n-i]){
                cout<<i<<' '<<n-i<<' ';
                break;
            }
        }
        cout<<'\n';
    }
}