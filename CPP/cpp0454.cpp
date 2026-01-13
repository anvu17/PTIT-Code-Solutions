#include<iostream>
#include<algorithm>
using namespace std;

bool check(long long a[],int n){
    for(int i=n-1;i>1;i--){
        int l=0,r=i-1;
        while(l<r){
            long long s=a[l]+a[r];
            if(s==a[i]) return 1;
            if(s<a[i]) l++; else r--;
        }
    }
    return 0;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]*=a[i];
        }
        sort(a,a+n);
        cout<<(check(a,n)?"YES":"NO")<<'\n';
    }
}