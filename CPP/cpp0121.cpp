#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        int gcd = __gcd(a,b);
        long long lcm = 1LL*a*b/gcd;
        cout<<lcm<<' '<<gcd<<'\n';
    }
}