#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; int a[22];
        for(int i=1;i<=n;i++) a[i]=i;
        do{
            for(int i=1;i<=n;i++) cout<<a[i];
            cout<<' ';
        }while(next_permutation(a+1,a+n+1));
        cout<<'\n';
    }
}