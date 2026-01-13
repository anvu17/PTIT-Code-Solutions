#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int m,n,a,b; cin>>m>>n>>a>>b;
        // Số lượng số chia hết cho A = (Số lượng số chia hết cho A từ 1 đến N) - (Số lượng số chia hết cho A từ 1 đến M-1)  
        int cntA=n/a-(m-1)/a;
        int cntB=n/b-(m-1)/b;
        // Số lượng số chia hết cho cả A và B
        int lcm=a*b/__gcd(a,b);
        int cntAB=n/lcm-(m-1)/lcm;
        // Kết quả: (Số lượng số chia hết cho A) + (Số lượng số chia hết cho B) - (Số lượng số chia hết cho cả A và B)
        cout<<cntA+cntB-cntAB<<'\n';
    }
}