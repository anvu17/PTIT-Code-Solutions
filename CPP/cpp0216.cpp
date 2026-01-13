#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int l,r; cin>>l>>r;
        int i=l;
        while(i<r&&a[i]<=a[i+1]) i++;
        while(i<r&&a[i]>=a[i+1]) i++;
        cout<<(i==r?"Yes":"No")<<'\n';
    }
}