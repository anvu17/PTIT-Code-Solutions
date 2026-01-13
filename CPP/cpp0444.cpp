#include<iostream>
using namespace std;

int bs(int a[],int n,int x){
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x) return m+1;
        if(a[l]<=a[m]){
            (a[l]<=x && x<a[m]) ? r=m-1 : l=m+1;
        }
        else{
            (a[m]<x && x<=a[r]) ? l=m+1 : r=m-1;
        }
    }
    return -1;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        int a[n];
        for(int&v:a) cin>>v;
        cout<<bs(a,n,x)<<'\n';
    }
}