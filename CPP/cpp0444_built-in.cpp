#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        int a[n];
        for(int&v:a) cin>>v;
        int r=min_element(a,a+n)-a;
        rotate(a,a+r,a+n);
        auto it=lower_bound(a,a+n,x);
        cout<<(it!=a+n && *it==x ? ((it-a)+r)%n+1 : -1)<<'\n';
    }
}