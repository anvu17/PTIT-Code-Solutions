#include <iostream>
#include <algorithm>
using namespace std;

long long lcm(long long a, long long b){
    return a*b/__gcd(a,b);
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long ans=1;
        for(int i=2;i<=n;i++) ans=lcm(ans,i);
        cout<<ans<<'\n';
    }
}