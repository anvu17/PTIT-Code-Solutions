#include<iostream>
#include<map>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k,cnt=0; cin>>n>>k;
        int a[n];
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        for(int i=0;i<n;i++){
            int r=k-a[i];
            cnt+=m[r];
            if(r==a[i]) cnt--;
        }
        cout<<cnt/2<<'\n';
    }
}